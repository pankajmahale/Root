// Carry Flag holds the last discarded bit. its uses imm8 or CL register
// 
// SHR  [reg/mem] [imm8/CL]    (Multyply by 2 to the power of index)  
// SHL						   (Dividing  by 2 to the power of index) 
// SAR
// SAL
// SAL & SHL both are same


//usefull for packing and unpacking data
//SHRD  [reg/meme] [reg] [imm8/cl]: Shift right double pricision. first two operands should be of same size  
//SHLD	[reg/meme] [reg] [imm8/cl]: Shift left double pricision.  8 bit operand not allowed.

#include "stdafx.h"

extern "C" unsigned long long pack(int a,int b,int c,int d);
extern "C" void unpack(long long ret);
int main()
{
	int a = 0xAAAA;
	int b = 0xBBBB;
	int c = 0xCCCC;
	int d = 0xDDDD;
	unsigned long long ret = pack(a, b, c, d);
	unpack(ret);
    return 0;
}

