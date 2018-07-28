#include "defines.h"
#include "serial.h"
#include "lib.h"
#include "xmodem.h"

#define XMODEM_SOH 0x01
#define XMODEM_STX 0x02
#define XMODEM_EOT 0x04
#define XMODEM_ACK 0x06
#define XMODEM_NAK 0x15
#define XMODEM_CAN 0x18
#define XMODEM_EOF 0x1a

#define XMODEM_BLOCK_SIZE 128

/*
「何も受信していない間、NAKを定期的に送信する」
*/
static int xmodem_wait(void)
{
	long cnt = 0;
	
	while (!serial_is_recv_enable(SERIAL_DEFAULT_DEVICE)) {	//何も受信していない間
		if (++cnt >= 2000000) {	//一定時間たったら
			cnt = 0;							//cntを初期化
			serial_send_byte(SERIAL_DEFAULT_DEVICE, XMODEM_NAK);	//NAKを送信
		}
	}
	return 0;
}

/*
「ブロック単位での受信」
ブロック番号とバッファの先頭アドレスを渡す
*/
static int xmodem_read_block(unsigned char block_number, char *buf)
{
	unsigned char c, block_num, check_sum;
	int i;

	block_num = serial_recv_byte(SERIAL_DEFAULT_DEVICE);	//１バイト受信（ブロック番号が格納）
	if (block_num != block_number)
		return -1;

	block_num ^= serial_recv_byte(SERIAL_DEFAULT_DEVICE);	//次の１バイト受信（反転ブロック番号が格納）
	if (block_num != 0xff)
		return -1;

	check_sum = 0;
	/*128バイトのデータを受信*/
	for (i = 0; i < XMODEM_BLOCK_SIZE; i++) {				//128回繰り返す				
		c = serial_recv_byte(SERIAL_DEFAULT_DEVICE);	
		*(buf++) = c;																	//*buf=cと代入してからbuf++
		check_sum += c;																
	}

	check_sum ^= serial_recv_byte(SERIAL_DEFAULT_DEVICE);
	if (check_sum)
		return -1;

	return i;
}

/*
「XMODEMによる受信を開始し、ダウンロードしたバイト列をバッファに格納」
バッファの先頭アドレスを渡す、総バイト列のサイズを返す
*/
long xmodem_recv(char *buf)
{
	int r, receiving = 0;
	long size = 0;
	unsigned char c, block_number = 1;

	while (1) {
		if (!receiving)
			xmodem_wait();	//何も受信していない間、定期的にNAKを送信する

		c = serial_recv_byte(SERIAL_DEFAULT_DEVICE);

		if (c == XMODEM_EOT) {																	//EOTを受信したら
			serial_send_byte(SERIAL_DEFAULT_DEVICE, XMODEM_ACK);	//ACKを送信して
			break;																								//終了
		} else if ( c == XMODEM_CAN) {													//CANを受信したら
			return -1;																						
		} else if (c == XMODEM_SOH) {														//SOHを受信したら
			receiving++;
			r = xmodem_read_block(block_number, buf);							//特定の１ブロックを受信
			if (r < 0) {																					//ブロック受信を失敗したら
				serial_send_byte(SERIAL_DEFAULT_DEVICE, XMODEM_NAK);
			} else {																							//ブロック受信を成功したら
				block_number++;
				size += r;
				buf += r;																						//バッファのアドレスをずらす
				serial_send_byte(SERIAL_DEFAULT_DEVICE, XMODEM_ACK);//ACKを送信
			}
		} else {
			if (receiving)
				return -1;
		}
	}

	return size;
}


	
