.data
; integer type
; ASM is not type safe sign vs unsigned comes down to which instuctions you use
; for some operation (DIV MUL ,IDIV IMUL)there are seperte instruction for signed and unsigned.
; byte
b1 db 5
b2 db ?
b3 byte 8
;word
w  word 3
w1 dw ?
;dword
long  dword 56
long1 dd ?
;qword
qword1 qword 5656;
qword2 dq ?
; Floating point 
; real4:  1-bit Sign bit, 8 bit Exponent,  23-bit Mentissa.
; real8:  1-bit Sign bit, 11 bit Exponent, 52-bit Mentissa.
; real10: 1-bit Sign bit, 15 bit Exponent, 64-bit Mentissa. (used with x87 FPU,it's ignored now a days)
vr4    real4 8.6
vr8    real8 7.6
vr10   real10 8.6
var10x TBYTE	
var10  DT

; SIMD data Type
; xmmword: XMM
; ymmword: AVX
; zmmword: AVX-512
.code
SomeFunction proc
	mov al, byte ptr[b1]	   ; move value of b1 to al
	mov ax, word ptr[w]		   ; move value of w to ax 
	mov eax, dword ptr [long]  ; move value of long to eax
	mov rax, qword ptr[qword1] ; move value of qword to rax

	mov eax, real4 ptr[vr4]
	mov rax, real8 ptr[vr8]
	ret
SomeFunction endp
end