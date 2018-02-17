.code
STOSB_Example proc
	mov rdi,rcx ; set the destination address
	mov al,'P'
	stosb

	mov al, 'a'
	stosb

	mov al, 'n'
	stosb

	mov al, 'k'
	stosb

	mov al,'a'
	stosb

	mov al, 'j'
	stosb

	mov al, 0
	stosb

	mov rax,rcx
	ret
STOSB_Example endp

STOSB_ExampleEx proc
 ;mov rcx, 2	  
 ;mov al,cl   ; only lower 8-bit updated. garbage values in higher-bits  
 ;mov ax, cx  ; only lower 16-bit updated. Garbage values in higher bits 
 ;mov eax,ecx ; 64-bits updated ; 0 filled higher bits
 ;mov rax,rcx ; 64-bits updated ;
 mov rax , r8
 mov rax,  r8 ; Fill parameter 3ed param
 mov rdi, rcx ; counter   1 param

 MyLoop:
    stosb
	dec rdx  ; couter 2nd parameter
	jnz MyLoop
	mov rax, rdx
	ret
STOSB_ExampleEx endp

end