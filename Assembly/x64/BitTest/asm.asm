.data
byteArry db 0,0,0,1
.code
; if second param is regiseter and if index is grater than max byte index then move in circle.

BTSStringScan proc
	lea rax, byteArry
	mov bx,23 
	;mov bx, -2 ; https://youtu.be/en_7DtfT8Cg?t=13m4s
	bt word ptr[rax],bx
	ret
BTSStringScan endp


funBT proc
	mov ax,11110000b; index start from 0
	bt ax ,0		; set the CY to 0
	bt ax ,4		; set the CY to 1
	ret
funBT endp



funBC proc
	mov ax,11b		; index start from 0
	btc ax ,0		; set the CY to 1 and bit index 0 to 1
	btc ax ,0		; set the CY to 1 and bit index 0 to 0
	ret
funBC endp


funBTR proc
	mov ax,11b		; index start from 0
	btr ax ,0		; set the CY to 1 and bit index 0 to 0
	btr ax ,0		; set the CY to 0 and bit index 0 to 0
	ret
funBTR endp


funBTS proc
	mov ax,11b		; index start from 0
	bts ax ,0		; set the CY to 1 and bit index 0 to 1
	bts ax ,0		; set the CY to 1 and bit index 0 to 0
	ret
funBTS endp



end
