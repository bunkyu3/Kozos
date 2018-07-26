#include "defines.h"
#include "serial.h"

#define SERIAL_SCI_NUM 3	//SCIの数

/*SCIの定義*/
#define H8_3069F_SCI0 ((volatile struct h8_3069f_sci *)0xffffb0)
#define H8_3069F_SCI1 ((volatile struct h8_3069f_sci *)0xffffb8)
#define H8_3069F_SCI2 ((volatile struct h8_3069f_sci *)0xffffc0)

/*SCIの各種レジスタの定義*/
struct h8_3069f_sci {
  volatile uint8 smr;
  volatile uint8 brr;
  volatile uint8 scr;
  volatile uint8 tdr;
  volatile uint8 ssr;
  volatile uint8 rdr;
  volatile uint8 scmr;
};

/*SMRの各ビットの定義*/
#define H8_3069F_SCI_SMR_CKS_PER1  (0<<0)	//00000000、クロックセレクトの設定
#define H8_3069F_SCI_SMR_CKS_PER4  (1<<0)	//00000001、クロックセレクトの設定
#define H8_3069F_SCI_SMR_CKS_PER16 (2<<0)	//00000010、クロックセレクトの設定
#define H8_3069F_SCI_SMR_CKS_PER64 (3<<0)	//00000011、クロックセレクトの設定
#define H8_3069F_SCI_SMR_MP     (1<<2)	//00000010、？？？
#define H8_3069F_SCI_SMR_STOP   (1<<3)	//00000100、ストップビット長２ビット（0→ストップビット長１ビット）
#define H8_3069F_SCI_SMR_OE     (1<<4)	//00001000、偶数パリティ（0→奇数パリティ）
#define H8_3069F_SCI_SMR_PE     (1<<5)	//00010000、パリティ有効化（0→パリティ無効化）
#define H8_3069F_SCI_SMR_CHR    (1<<6)	//00100000、データ長８ビット（0→データ長７ビット）
#define H8_3069F_SCI_SMR_CA     (1<<7)	//01000000、クロック同期式モード（0→調歩同期式モード）

/*SCRの各ビットの定義*/
#define H8_3069F_SCI_SCR_CKE0   (1<<0)	//クロックイネーブルの設定
#define H8_3069F_SCI_SCR_CKE1   (1<<1)	//クロックイネーブルの設定
#define H8_3069F_SCI_SCR_TEIE   (1<<2)	//？？？
#define H8_3069F_SCI_SCR_MPIE   (1<<3)	//？？？
#define H8_3069F_SCI_SCR_RE     (1<<4) 	//受信イネーブル、１で受信開始
#define H8_3069F_SCI_SCR_TE     (1<<5)	//送信イネーブル、１で送信開始
#define H8_3069F_SCI_SCR_RIE    (1<<6)	//受信割り込みイネーブル、１で受信割り込み有効
#define H8_3069F_SCI_SCR_TIE    (1<<7)	//送信割り込みイネーブル、１で送信割り込み有効

/*SSRの各ビットの定義*/
#define H8_3069F_SCI_SSR_MPBT   (1<<0)	//？？
#define H8_3069F_SCI_SSR_MPB    (1<<1)	//？？
#define H8_3069F_SCI_SSR_TEND   (1<<2)	//？？
#define H8_3069F_SCI_SSR_PER    (1<<3)	//？？
#define H8_3069F_SCI_SSR_FERERS (1<<4)	//？？
#define H8_3069F_SCI_SSR_ORER   (1<<5)	//？？
#define H8_3069F_SCI_SSR_RDRF   (1<<6)	//00100000、受信完了
#define H8_3069F_SCI_SSR_TDRE   (1<<7) 	//01000000、送信完了

static struct {
  volatile struct h8_3069f_sci *sci;
} regs[SERIAL_SCI_NUM] = {	//「h8_3069_sci型のポインタ」型をメンバにもつ構造体を３つ定義
  { H8_3069F_SCI0 }, 
  { H8_3069F_SCI1 }, 
  { H8_3069F_SCI2 }, 
};

/*
「デバイスの初期化」
SCIの番号を渡すと、それに対応するSCIのSCR、SMR、BRR,SSRレジスタを初期化
*/
int serial_init(int index)
{
  volatile struct h8_3069f_sci *sci = regs[index].sci;

  sci->scr = 0;	//SCRのビットはすべて0に（設定が終わるまでシリアル送受信と割り込みをすべて無効化）
  sci->smr = 0;	//SMRのビットはすべて0に（ストップビット長１ビット、パリティ無効化、データ長８ビットなど）
  sci->brr = 64;	//シリアル通信のボーレートが9600bpsになる 
  sci->scr = H8_3069F_SCI_SCR_RE | H8_3069F_SCI_SCR_TE;//送受信を有効化
  sci->ssr = 0;	//SMRのビットはすべて0に

  return 0;
}

/*
「送信可能か？（SSRの送信完了ビットが立っているか？）」
可能であれば１を返す
*/
int serial_is_send_enable(int index)
{
  volatile struct h8_3069f_sci *sci = regs[index].sci;
  return (sci->ssr & H8_3069F_SCI_SSR_TDRE);
}

/*
「1文字送信」
SCIの番号と１文字を渡す
*/
int serial_send_byte(int index, unsigned char c)
{
  volatile struct h8_3069f_sci *sci = regs[index].sci;

  /*送信可能になるまで待つ*/
  while (!serial_is_send_enable(index))
    ;
	/*送信可能になった*/
  sci->tdr = c;
  sci->ssr &= ~H8_3069F_SCI_SSR_TDRE;	//送信開始（a&=bはa=a&bより、ssr=ssr&10111111）

  return 0;
}

/*
「受信したデータがあるか？」
あれば１を返す
*/
int serial_is_recv_enable(int index)
{
	volatile struct h8_3069f_sci *sci = regs[index].sci;
	return (sci->ssr & H8_3069F_SCI_SSR_RDRF);
}

/*
「1文字受信」
SCIの番号を渡す
*/
unsigned char serial_recv_byte(int index)
{
  volatile struct h8_3069f_sci *sci = regs[index].sci;
	unsigned char c;

  /*受信文字が来るまで待つ*/
  while (!serial_is_recv_enable(index))
    ;
	/*受信文字が来た*/
  c = sci->rdr;
  sci->ssr &= ~H8_3069F_SCI_SSR_RDRF;	//受信完了→次のデータを受信可能にする（ssr=ssr&11011111）

  return c;
}
