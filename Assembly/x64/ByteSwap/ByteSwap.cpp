//BSWAP change the endineness 
<<<<<<< HEAD
// BSWAP [reg32/64] only 32 and 64 bit versions, use XCHG al,ah for 16 bit
=======
// BSWAP [reg32/64] only 32 and 64 bit versions
>>>>>>> b193567... Missing files added
//STD : Set the direction flag   (UP = 1)
//CLD : Clear the direction flag; (UP = 0)
//STC : Set the carry flag
//CLC : Clear carry flag
//CMC : Compliment carry flag
// PUSHf
// POPF

<<<<<<< HEAD

=======
>>>>>>> b193567... Missing files added
#include "stdafx.h"
extern "C" void Bitswap();
int main()
{
	Bitswap();
    return 0;
}

