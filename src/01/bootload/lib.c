#include "defines.h"
#include "serial.h"
#include "lib.h"

/*
「メモリを特定のパターンで埋める」
開始番地(b)、代入する値(c)、終了番地までの長さ(len)を渡す
*/
void *memset(void *b, int c, long len)	//void *bは汎用ポインタ（ポインタ型であればどのような型でも受け取れる）
{
	char *p;
	for (p = b; len > 0; len--)
		*(p++) = c;
	return b;
}

/*
「メモリのコピー」
書き込み先の開始番地(dst)、読み込み元の開始番地(src)、終了番地までの長さ(len)を渡す
*/
void *memcpy(void *dst, const void *src, long len)	//const void *srcは読み取り専用という意味
{
	char *d = dst;
	const char *s = src;
	for (; len > 0; len--)
		*(d++) = *(s++);
	return dst;
}

/*
「メモリ上のデータの比較」
対象の開始番地(b1)、対象の開始番地(b2)、終了番地までの長さ(len)を渡す
データが異なる場合、すべて調べ終わる前にそこでループを抜ける
*/
int memcmp(const void *b1, const void *b2, long len)
{
	const char *p1 = b1, *p2 = b2;
	for (; len > 0; len--){
		if (*p1 != *p2)									//データが異なっているならば
			return (*p1 > *p2) ? 1 : -1;	//*p1 > *p2のとき1を返す、それ以外は-1を返す
		p1++;
		p2++;
	}
	return 0;
}

/*
「文字列の長さを返す」
開始番地(s)を渡す
*/
int strlen(const char *s)
{
	int len;
	for (len = 0; *s; s++, len++)	//*sが1の間ループ
		;
	return len;
}

/*
「文字列のコピー」
コピー先の開始番地(dst)、コピー元の開始番地(src)を渡す
*/
char *strcpy(char *dst, const char *src)
{
	char *d	= dst;
	for (;; dst++, src++) {
		*dst = *src;
		if (!*src) break;	//*srcが0ならばbreak
	}
	return d;
}

/*
「文字列の比較」
対象の開始番地(s1)、対象の開始番地(s2)を渡す
*/
int strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2) {	//*s1と*s2の論理和が0でなければ(*s1と*s2が両方0だったら抜ける)
		if (*s1 != *s2)
			return (*s1 > *s2) ? 1 : -1;
		s1++;
		s2++;
	}
	return 0;
}

/*
「長さ制限ありでの文字列の比較」
対象の開始番地(s1)、対象の開始番地(s2)、比較する長さ(len)を渡す
*/
int strncmp(const char *s1, const char *s2, int len)
{
	while ((*s1 || *s2) && (len > 0)) {	
		if (*s1 != *s2)
			return (*s1 > *s2) ? 1 : -1;
		s1++;
		s2++;
		len--;
	}
	return 0;
}


/*
「1文字送信」
送信したい１文字を渡す
改行コードの場合'\r\nを出力'
出力先はSCI1（デフォルトとして設定）
*/
int putc(unsigned char c)
{
  if (c == '\n')
    serial_send_byte(SERIAL_DEFAULT_DEVICE, '\r');	//改行コードの変換
  return serial_send_byte(SERIAL_DEFAULT_DEVICE, c);
}

/*
「1文字受信」
改行コードの場合'\r\nを出力'
出力先はSCI1（デフォルトとして設定）
*/
unsigned char getc(void)
{
	unsigned char c = serial_recv_byte(SERIAL_DEFAULT_DEVICE);
	c = (c == '\r') ? '\n' : c;	//改行コードの変換
	putc(c);	//エコーバック
	return c;
}

/*
「文字列送信」
送信したい文字列を渡す
*/
int puts(unsigned char *str)
{
  while (*str)
    putc(*(str++));
  return 0;
}

/*
「文字列受信」
バッファの先頭番地を渡し、文字数が帰る
*/
int gets(unsigned char *buf)
{
	int i = 0;
	unsigned char c;
	do {
		c = getc();			//1文字受信
		if (c == '\n')	//改行コードだったら
			c = '\0';
		buf[i++] = c;		//バッファに格納
	} while (c);
	return i - 1;
}


/*
「数値の16進表示」
表示したい値、表示幅（桁）を渡す
*/
int putxval(unsigned long value, int column)
{
	char buf[9];	//文字列出力用バッファ
	char *p;

	p = buf + sizeof(buf) - 1;	//バッファの終端番地をpに代入
	*(p--) = '\0';			//[][][][][][][][][\0]としてからp--

	if (!value && !column)		//value==0かつcolumn==0のとき
		column++;

	while (value || column) {	//value!=0またはcolumn!=0のとき
		*(p--) = "0123456789abcdef"[value & 0xf];	//16進数に変換してバッファに格納する（２進数の４桁が１６進数の１桁に変換）
		value >>= 4;															//次の桁に進める
		if (column) column--;											//桁数指定がある場合にはカウントする
	}

	puts(p+1);	//バッファの内容を出力する

  return 0;
}
