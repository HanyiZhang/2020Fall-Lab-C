	.global _Z6setBitii
	.global _Z8clearBitii
	.global _Z4flipii
	.global _Z11replaceBitsiii
	.global _Z10buildColoriii
	.global Lab5.cc

_Z6setBitii:

	mov	r2, #1
	lsl	r2, r1
	orr	r2, r2, r0

	mov	r0, r2
	bx	lr


_Z8clearBitii:

	mov	r2, #1
	mov	r3, #0xFFFFFFFF
	lsl	r2, r1
	eor	r1, r3, r2
	and	r1, r1, r0

	mov	r0, r1
	bx	lr

	
_Z4flipii:

	mov	r2, #1
	lsl	r2, r1
	eor	r0, r0, r2

	mov	r1, r0
	bx	lr
	

_Z11replaceBitsiii:

	mov	r3, #0
	and	r3, r0, r1
	orr	r0, r3, r2

	mov	r1, r0
	bx	lr


_Z10buildColoriii:

	lsl	r0, #16
	lsl	r1, #8

	mov	r3, #0
	orr	r0, r0, r1
	orr	r0, r0, r2
	orr	r0, r0, r3
	
	mov	r1, r0
	bx	lr


	
