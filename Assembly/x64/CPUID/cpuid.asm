.data
	vedorString db 12 dup(0),0
.code
GetCUPIDSupport proc
	push rbx	 ;save caller's register
	pushfq		 ;push the flag register
	pop rax		 ;pop the flag into rax
	mov rbx, rax ; save the value into ebx for later comarision
	xor rax,200000h ; set the 21 bit to 1
	push rax;
	popfq
	pushfq
	pop rax
	cmp rax,rbx
	jz No_CPUID
	pop rbx
	mov rax, 1
	ret
No_CPUID:
	pop rbx;
	mov rax,0
	ret
GetCUPIDSupport endp

GetVendorString proc
	push rbx
	mov rax, 0
	cpuid
	lea rax, vedorString
	mov dword ptr [rax],ebx
	mov dword ptr [rax+4],edx
	mov dword ptr [rax+8],ecx
	pop rbx 
	ret
GetVendorString endp
    
GetLogicalProcessor proc
	push rbx
	mov rax, 1
	cpuid
	and ebx, 00ff0000h ;mask out all the bists other than 16-24
	mov eax,ebx
	pop rbx
	shr eax,16 ; shift the answer to the right for printning
	ret
GetLogicalProcessor endp

JumpTest proc
	 xor rax,rax
	 mov rax, MyLabel
	 lea rax, MyLabel
	 jmp MyLabel+16
	 mov rax,100
MyLabel:
	 mov rax,200
	  
JumpTest endp
end