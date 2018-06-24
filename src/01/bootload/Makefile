PREFIX  = /usr/local
ARCH    = h8300-elf
BINDIR  = $(PREFIX)/bin
ADDNAME = $(ARCH)-

#利用するツール類の指定
AR      = $(BINDIR)/$(ADDNAME)ar
AS      = $(BINDIR)/$(ADDNAME)as
CC      = $(BINDIR)/$(ADDNAME)gcc
LD      = $(BINDIR)/$(ADDNAME)ld
NM      = $(BINDIR)/$(ADDNAME)nm
OBJCOPY = $(BINDIR)/$(ADDNAME)objcopy
OBJDUMP = $(BINDIR)/$(ADDNAME)objdump
RANLIB  = $(BINDIR)/$(ADDNAME)ranlib
STRIP   = $(BINDIR)/$(ADDNAME)strip

H8WRITE = ../../PackageFiles/src/kz_h8write	#フラッシュROM書き込みツール

# FreeBSD-4.x:/dev/cuaaX, FreeBSD-6.x:/dev/cuadX, FreeBSD(USB):/dev/cuaUx
# Linux:/dev/ttySx, Linux(USB):/dev/ttyUSBx, Windows:comX
H8WRITE_SERDEV = /dev/ttyUSB0	#シリアル接続先

#コンパイルするソースコード群
OBJS  = vector.o startup.o main.o
OBJS += lib.o serial.o

TARGET = kzload

CFLAGS = -Wall -mh -nostdinc -nostdlib -fno-builtin
#CFLAGS += -mint32 # intを32ビットにすると掛算／割算ができなくなる
CFLAGS += -I.
#CFLAGS += -g
CFLAGS += -Os
CFLAGS += -DKZLOAD

LFLAGS = -static -T ld.scr -L.

.SUFFIXES: .c .o
.SUFFIXES: .s .o

all :		$(TARGET)

#実行形式の生成ルール
$(TARGET) :	$(OBJS)
		$(CC) $(OBJS) -o $(TARGET) $(CFLAGS) $(LFLAGS)
		cp $(TARGET) $(TARGET).elf
		$(STRIP) $(TARGET)

#*.cファイルのコンパイル・ルール
.c.o :		$<
		$(CC) -c $(CFLAGS) $<

#アセンブラファイルのアセンブル・ルール
.s.o :		$<
		$(CC) -c $(CFLAGS) $<

#モトローラSレコード・フォーマットへの変換ルール
$(TARGET).mot :	$(TARGET)
		$(OBJCOPY) -O srec $(TARGET) $(TARGET).mot

image :		$(TARGET).mot

write :		$(TARGET).mot
		$(H8WRITE) -3069 -f20 $(TARGET).mot $(H8WRITE_SERDEV)	#フラッシュROMへの転送

clean :
		rm -f $(OBJS) $(TARGET) $(TARGET).elf $(TARGET).mot	#フォルダの掃除
