#include "defines.h"
#include "serial.h"
#include "lib.h"

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

/*「文字列送信」
送信したい文字列を渡す
*/
int puts(unsigned char *str)
{
  while (*str)
    putc(*(str++));
  return 0;
}
