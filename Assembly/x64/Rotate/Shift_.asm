.code
pack proc
	shrd rdi,rcx, 16
	shrd rdi,rdx, 16
	shrd rdi,r8, 16
	shrd rdi,r9, 16
	mov rax, rdi
	ret
pack endp

unpack proc
	xor r8,r8
	xor r9,r9
	xor rax,rax
	xor rbx,rbx

	shld r8,rcx,16
	shl rcx,16

	shld r9,rcx,16
	shl rcx,16

	shld rbx,rcx,16
	shl rcx,16

	shld rax,rcx,16
	shl rcx,16
	ret
unpack endp



; bl = 11011011 ,CY = 1
;ROL	[reg/mem],[imm8,cl]	; ror bl,3  bl =11011110
;ROR	[reg/mem],[imm8,cl] , rol bl,3	bl =01111011

;RCL	[reg/mem],[imm8,cl] , rcl bl,3	bl =11011111  ,CY=0
;RCR	[reg/mem],[imm8,cl] , rcr bl,3  bl =01111011  ,11111011  CY=0
rotate proc
	clc;
	mov al,11011011b
	rol al,3
	ror al,3
	;mov al,11011011b
	ror al,3
	rol al,3
	;mov al,11011011b
	stc; set the carry flag to 1
	rcl al,3
	rcr al,3
	;mov al,11011011b
	stc; set the carry flag to 1
	rcr al,3
	rcl al,3
	ret;
rotate endp
end