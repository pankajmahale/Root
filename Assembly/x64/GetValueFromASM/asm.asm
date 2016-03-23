; Conditinal Move
; move ebx,eax
; cmovne ecx, ebx   if  cmp mov ebx, eax are not equeal then move ebx into ecx
;
;CF/CCY      JC/JNC					CMOVC, CMOVNC
;PF/PE		 JP/JNP					CMOVP CMOVNP
;									CMOVPE,CMOVPO
;
;AF/AC			NA						NA    (for BCD)
;
;
;
;


 


.code
GetValueFromASM proc
	mov rax, 1000
	ret
GetValueFromASM endp
end
