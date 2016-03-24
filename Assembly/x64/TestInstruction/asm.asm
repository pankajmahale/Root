.code
isEvenNumber proc
push rbp
mov rbp, rsp
test rcx, 1
jz EvenNumber;  jump if zero flag set to 1 (ZR)
	mov rax, 0
	mov rsp, rbp
	pop rbp
	ret
EvenNumber :
	mov eax, 1
	mov rsp ,rbp
	pop rbp
	ret
isEvenNumber endp

isDivisible proc
	push rbp
	mov rbp, rsp
	dec edx
	test ecx, edx
	JZ Divisible; jump if sign flag set to 1 (PL)
	mov eax, 0
	mov rsp, rbp
	pop rbp
	ret
Divisible:
	mov eax, 1
	mov rsp, rbp
	pop rbp
	ret
isDivisible endp

isBothNuberNegative proc
	push rbp
	mov rbp, rsp
	test ecx, edx
	js Negative ; jump if sign flag set to 1 (PL)
	mov eax, 0
	mov rsp, rbp
	pop rbp
	ret
Negative :
	mov eax, 1
	mov rsp, rbp
	pop rbp
	ret
isBothNuberNegative endp

isEvenParity proc
	push rbp
	mov rbp, rsp
	test ecx, edx
	jp EvenParity; jump if sign flag set to 1 (PL)
	mov eax, 0
	mov rsp, rbp
	pop rbp
	ret
EvenParity:
	mov eax, 1
	mov rsp, rbp
	pop rbp
	ret
isEvenParity endp
end