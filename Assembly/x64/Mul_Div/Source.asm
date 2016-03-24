.code
; int Multiply(int a, int b)
; ecx = a
; edx = b
Multiply proc
	;mov eax,ecx
	;imul edx
	imul ecx,edx
	mov eax,ecx	
	ret
Multiply endp

Divid proc
	mov r8d,edx
	mov eax,ecx
	cdq ;Converts signed DWORD in EAX to a signed quad word in EDX:EAX by
        ;extending the high order bit of EAX throughout EDX
	idiv r8d
	ret
Divid endp

Remainder proc
	mov r8d,edx
	mov eax,ecx
	cdq ;Converts signed DWORD in EAX to a signed quad word in EDX:EAX by
        ;extending the high order bit of EAX throughout EDX
	idiv r8d
	mov eax,edx
	ret
Remainder endp
end