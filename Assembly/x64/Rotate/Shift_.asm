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
end