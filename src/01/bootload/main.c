#include "defines.h"
#include "serial.h"
#include "xmodem.h"
#include "elf.h"
#include "lib.h"

static int init(void)
{
	/*
	以下はリンカ・スクリプトで定義してあるシンボル
	リンカ・スクリプトで定義されたシンボルを参照可能にする
	*/
	extern int erodata, data_start, edata, bss_start, ebss;	

	/*
	データ領域とBSS領域を初期化する。この処理以降でないと、
	グローバル変数が初期化されていないので注意
	*/
	memcpy(&data_start, &erodata, (long)&edata - (long)&data_start);
	memset(&bss_start, 0, (long)&ebss - (long)&bss_start);

	/*シリアルの初期化*/
	serial_init(SERIAL_DEFAULT_DEVICE);		//シリアルデバイスを初期化
	
	return 0;
}

/*
「メモリの16進ダンプ出力」
出力したいメモリの先頭番地、サイズ、を渡す
*/
static int dump(char *buf, long size)
{
	long i;

	if (size < 0) {
		puts("no data.\n");
		return -1;
	}
	for (i = 0; i < size; i++) {
		putxval(buf[i], 2);			//16進表示（2桁）
		if ((i & 0xf) == 15) {		//16回表示したら
			puts("\n");				//改行
		} else {
			if ((i & 0xf) == 7) puts(" ");	//7回表示したら
			puts(" ");						//スペース表示
		}
	}
	puts("\n");

	return 0;
}

/*
「ウェイトする（何もしない）関数」
*/
static void wait()
{
	volatile long i;
	for (i = 0; i < 300000; i++)
		;
}

int main(void)
{
	static char buf[16];
	static long size = -1;
	static unsigned char *loadbuf = NULL;
	char *entry_point;
	void (*f)(void);
	extern int buffer_start;

	init();  
 	puts("kzload (kozos boot loader) started.\n");

	while (1) {
		puts("kzload> ");		//プロンプト表示
		gets(buf);				//シリアルからのコマンド受信（文字列）

		if (!strcmp(buf, "load")) {						//コマンド"load"を受信
			loadbuf = (char *)(&buffer_start);			//リンカスクリプトで定義
			size = xmodem_recv(loadbuf);				//loadbuf番地以降にロード
			wait();										//ウェイト
			if (size < 0) {
				puts("\nXMODEM receive error!\n");
			} else {
				puts("\nXMODEM receive succeeded.\n");
			}
		} else if (!strcmp(buf, "dump")) {				//コマンド"dump"を受信
			puts("size: ");
			putxval(size, 0);							//サイズを16進表示
			puts("\n");
			dump(loadbuf, size);						//dump出力
		} else if (!strcmp(buf, "run")) {
			entry_point = elf_load(loadbuf);
			if (!entry_point) {
				puts("run error!\n");
			} else {
				puts("starting from entry point: ");
				putxval((unsigned long)entry_point, 0);
				puts("\n");
				f = (void (*)(void))entry_point;			//ロードしたプログラムに処理を渡す
				f();
				//ここには返ってこない
			}
		} else {
			puts("unknown.\n");
		}
	}
    

  return 0;
}
