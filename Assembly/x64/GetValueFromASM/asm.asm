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
.data
; integer type
; ASM is not type safe sign vs unsigned comes down to which instuctions you use
; for some operation (DIV MUL ,IDIV IMUL)there are seperte instruction for signed and unsigned.
;
;
; byte,word,dword,qword
b1 db 5
b2 db ?
b3 byte 8


w  word 3
w1 word ?

long  dword 56
long1 dw ?

qword1 qword 5656;
qword2 qword ?
; Floating point 
; real4:  1-bit Sign bit, 8 bit Exponent,  23-bit Mentissa.
; real8:  1-bit Sign bit, 11 bit Exponent, 52-bit Mentissa.
; real10: 1-bit Sign bit, 15 bit Exponent, 64-bit Mentissa. (used with x87 FPU,it's ignored now a days)
r4  real4 8.6
vr8 real8 7.6
vr10 real10 8.6


; SIMD data Type
; xmmword: XMM
; ymmword: AVX
; zmmword: iAVX-512
.code
GetValueFromASM proc
	mov rax, 1000
	ret
GetValueFromASM endp
end

