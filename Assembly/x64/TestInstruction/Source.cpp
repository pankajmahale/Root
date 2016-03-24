#include<iostream>
using namespace std;
extern "C" bool isEvenNumber(int a);
extern "C" bool isDivisible(int a,int b);
extern "C" bool isBothNuberNegative(int a, int b);
extern "C" bool isEvenParity(int a, int b);
// sets the parity, sign and zero flag
//TEST instrution can be used to check perticular bit is set to one
//		A = 1100-1100-1010-1100 
//		B =	0010-0000-0000-0000	(checks the 13 bit its zero so set the ZR=0 so below jump will be taken)
//		JZ BitisZero
//
//		A = 1100-1100-1010-1100 
//		B =	0100-0000-0000-0000	(checks the 15 bit its 1 so set the ZR=1 so below jump will not be taken)
//		JZ BitisZero

int main(int argc, char* argv[])
{
	cout<< "7 is " << (isEvenNumber(7)?"Even ":  "Odd") << "Number"<<std::endl;
	cout << "16 is " << (isEvenNumber(16) ? "Even " : "Odd") << "Number" << std::endl;

	cout << "-67 and -36 " << (isBothNuberNegative(-67,-36) ? " both numbers are negative " : "both are not Negative")<< std::endl;
	cout << "-67 and 36 " << (isBothNuberNegative(-67, 36) ? " both numbers are negative " : "both are not Negative") << std::endl;
	cout << "67 and -36 " << (isBothNuberNegative(67, -36) ? " both numbers are negative " : "both are not Negative") << std::endl;
	cout << "67 and 36 " << (isBothNuberNegative(67, 36) ? " both numbers are negative " : "both are not Negative") << std::endl;

	cout << "4 and 3 " << (isEvenParity(4, 3) ? " Even parity " : " Odd parity") << std::endl;
	cout << "4 and 4 " << (isEvenParity(4, 4) ? " Even parity " : " Odd parity") << std::endl;

	cout << "523 and 524 " << (isEvenParity(4, 4) ? " Even parity " : " Odd parity") << std::endl;
	cout << "523 and 524 " << (isEvenParity(4, 4) ? " Even parity " : " Odd parity") << std::endl;
	//38008 -1000-0000-1111-0000
	//49392 -1100-0000-1111-0000
	//Parity-1000-0000-1111-0000  (Only last 8 bits are considered for parity check)
	cout << "33008 and 49392 " << (isEvenParity(33008, 49392) ? " Even parity " : " Odd parity") << std::endl;
	cout << "isDivisible(10, 1) " << (isDivisible(10, 1) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 2) " << (isDivisible(10, 2) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 3) " << (isDivisible(10, 3) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 4) " << (isDivisible(10, 4) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 5) " << (isDivisible(10, 5) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 6) " << (isDivisible(10, 6) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 7) " << (isDivisible(10, 7) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 8) " << (isDivisible(10, 8) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 9) " << (isDivisible(10, 9) ? " divisible " : " not divisible") << std::endl;
	cout << "isDivisible(10, 0) " << (isDivisible(100, 60) ? " divisible " : " not divisible") << std::endl;
	return 0;
}