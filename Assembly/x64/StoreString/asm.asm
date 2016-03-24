.code

SarchChar proc
	mov rdi,rcx
	mov al,dl
	mov rcx,r8
	REPNE SCASB	; REPNZ SCASB and REPNE SCASB both are same
	JZ Found
	JNZ Notfound

Notfound:
	mov rax,0
	ret
Found:
	mov rax,r8
	sub rax,rcx ; Position of found char
	ret
SarchChar endp
	FillChar proc
	mov rdi,rcx
	mov rcx,5
	mov al,'A'
	rep stosb ; repeat this instuction rcx time and fill the memory by al start address is rdi
	ret
	FillChar endp

	FillShort proc
	mov rdi,rcx
	mov ax, 100
	stosw
	stosw
	stosw
	stosw
	stosw
	ret
	FillShort endp

	FillInt proc
	mov rdi,rcx
	mov eax, 100
	stosd
	stosd
	stosd
	stosd
	stosd
	ret
	FillInt endp

	FillLong proc
	mov rdi,rcx
	mov rax, 100
	mov rcx,100
	rep stosq
	ret
	FillLong endp

	ZeroMemory proc
	mov rdi, rcx
	mov al,97
	Myloop:
		stosb
		dec rdx
		jnz MyLoop
	ret
	ZeroMemory endp
end