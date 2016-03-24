//BSWAP change the endineness 
// BSWAP [reg32/64] only 32 and 64 bit versions, use XCHG al,ah for 16 bit
//STD : Set the direction flag   (UP = 1)
//CLD : Clear the direction flag; (UP = 0)
//STC : Set the carry flag
//CLC : Clear carry flag
//CMC : Compliment carry flag
// PUSHf
// POPF


#include "stdafx.h"
extern "C" void Bitswap();
int main()
{
	Bitswap();
    return 0;
}

