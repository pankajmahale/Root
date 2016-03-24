// Bit test instuction tests perticular bit and sets the carry flag (CF)
// Syntex [reg/mem],[reg,imm]
// BT	= bit Test
// BTC	= bit Test and compliment
// BTR  = bit test and reset
// BTS  = bit test and set
// No 8 bit version and index start from 0
//
extern "C" void funBT();
extern "C" void funBC();
extern "C" void funBTR();
extern "C" void funBTS();
extern "C" void BTSStringScan();

#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	funBT();
	funBC();
	funBTR();
	funBTS();
	BTSStringScan();
	return 0;
}