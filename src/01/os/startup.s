	.h8300h
	.section .text
	.global	_start
#	.type	_start,@function
_start:				#ラベル「_start」の定義
	mov.l	#_stack,sp	#スタックポインタの設定
	jsr	@_main		#main()の呼び出し

1:
	bra	1b
