.code
Bitswap proc
	mov eax, 12345678h
	bswap eax 
	bswap eax 
	std
	cld
	cmc
	stc
	clc
	ret
Bitswap endp
end