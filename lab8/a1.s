.global _Z2a1j
.global _Z2a2j

_Z2a1j:
	mov r1, #0

1:
	add r1, #1
	cmp r1, r0
	ble 1b




_Z2a2j:
	mov r1, #0

1:
	sub r0, #1
	cmp r1, r0
	bge 1b
	
