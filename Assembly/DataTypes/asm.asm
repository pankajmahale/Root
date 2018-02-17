.data
; integer type
; ASM is not type safe sign vs unsigned comes down to which instuctions you use
; for some operation (DIV MUL ,IDIV IMUL)there are seperte instruction for signed and unsigned.
;
;
; byte,word,dword,qword
db b1 5
db b2 ?
byte b3 8


word w 3
dw   w1 ?

dword  long 56
dd	   long1 ?

qword qword1 5656;
dq    qword2 ?
; Floating point 
; real4:  1-bit Sign bit, 8 bit Exponent,  23-bit Mentissa.
; real8:  1-bit Sign bit, 11 bit Exponent, 52-bit Mentissa.
; real10: 1-bit Sign bit, 15 bit Exponent, 64-bit Mentissa. (used with x87 FPU,it's ignored now a days)
real4 r4 8.6
real8 vr8 7.6
real10 vr10 8.6


; SIMD data Type
; xmmword: XMM
; ymmword: AVX
; zmmword: iAVX-512
.code
SomeFunction proc
	mov al, byte ptr[b1]	 ; move value of b1 to al
	mov ax word ptr[w]		 ; move value of w to ax 
	mov eax dword ptr [long] ; move value of long to eax
	mov rax qword ptr[qword1]; move value of qword to rax

	mov eax real4 ptr[vr4]
	mov eax real8 ptr[vr8]
	ret
SomeFunction endp
end