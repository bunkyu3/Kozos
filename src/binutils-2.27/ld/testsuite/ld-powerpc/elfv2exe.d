#source: elfv2.s
#as: -a64
#ld: -melf64ppc --defsym f2=0x1234 --defsym f3=0x10008888 --defsym f4=0x1200000 --defsym _start=f1
#objdump: -dr

.*

Disassembly of section \.text:

0+100000c0 <.*\.plt_branch\.f2>:
.*:	(3d 82 ff ff|ff ff 82 3d) 	addis   r12,r2,-1
.*:	(e9 8c 7f 28|28 7f 8c e9) 	ld      r12,32552\(r12\)
.*:	(7d 89 03 a6|a6 03 89 7d) 	mtctr   r12
.*:	(4e 80 04 20|20 04 80 4e) 	bctr

0+100000d0 <.*\.plt_branch\.f4>:
.*:	(3d 82 ff ff|ff ff 82 3d) 	addis   r12,r2,-1
.*:	(e9 8c 7f 30|30 7f 8c e9) 	ld      r12,32560\(r12\)
.*:	(7d 89 03 a6|a6 03 89 7d) 	mtctr   r12
.*:	(4e 80 04 20|20 04 80 4e) 	bctr

0+100000e0 <_start>:
.*:	(3c 40 10 02|02 10 40 3c) 	lis     r2,4098
.*:	(38 42 82 00|00 82 42 38) 	addi    r2,r2,-32256
.*:	(7c 08 02 a6|a6 02 08 7c) 	mflr    r0
.*:	(f8 21 ff e1|e1 ff 21 f8) 	stdu    r1,-32\(r1\)
.*:	(f8 01 00 30|30 00 01 f8) 	std     r0,48\(r1\)
.*:	(4b ff ff f5|f5 ff ff 4b) 	bl      .* <_start\+0x8>
.*:	(e8 62 80 08|08 80 62 e8) 	ld      r3,-32760\(r2\)
.*:	(4b ff ff c5|c5 ff ff 4b) 	bl      .*\.plt_branch\.f2>
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(e8 62 80 10|10 80 62 e8) 	ld      r3,-32752\(r2\)
.*:	(48 00 87 81|81 87 00 48) 	bl      10008888 <f3>
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(4b ff ff c1|c1 ff ff 4b) 	bl      .*\.plt_branch\.f4>
.*:	(60 00 00 00|00 00 00 60) 	nop
.*:	(e8 01 00 30|30 00 01 e8) 	ld      r0,48\(r1\)
.*:	(38 21 00 20|20 00 21 38) 	addi    r1,r1,32
.*:	(7c 08 03 a6|a6 03 08 7c) 	mtlr    r0
.*:	(4e 80 00 20|20 00 80 4e) 	blr
