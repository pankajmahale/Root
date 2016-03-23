.data
; db 8  bit
; dw 16 bit
; dd 32 bit
; dq 64 bit
a dq 300  
b dq 200

.code
;******************************************************
 Min proc
 	mov rax, 90
 	lea rax, [a] ; loads the address of a into rax
 	lea rbx, [b] ; loads the address of b into rax	
 	mov rax, [a] ; load value of a into rax
 	mov rbx, b ; load value of a into rax
 	cmp rax,rbx
 	jge MinLebel ; if a >= b then jump to b
 		ret;
 MinLebel:
	mov rax,[b]
		ret
 Min endp


;******************************************************
 Max proc
 	mov rax, 90
 	lea rax, [a] ; loads the address of a into rax
 	lea rbx, [b] ; loads the address of b into rax	
 	mov rax, a ; load value of a into rax
 	mov rbx, b ; load value of a into rax
 	cmp rax, rbx
 	jle MaxLebel ; if a <= b then jump to b
 	ret;
 MaxLebel:
	mov rax,[b]
	ret
 Max endp
 
 ;******************************************************
 MyTest proc
	lea rax,[a] ; Both the statments are same
	lea rax,a	;

	mov rbx ,rax
	mov rbx ,[rax] ; load the contents of location pointed by rax to rbx
	ret
 MyTest endp
end

