#include<iostream>
using namespace std;

extern "C" char* STOSB_Example(char *d);
extern "C" char* STOSB_ExampleEx(char *buff, int size, char ch);

int main()
{   
	// 4222167600857095 == 00000000 00001111 00000000 00001010 00000000 00001000 00000000 00000111
	// memory (byte)
	// 00000111 00000000 00001000 00000000 00001010 00000000 00001111 00000000
	//    7       0        8        0         10        0       15       0
	// word
	//0000000000001111 0000000000001000 000000001010 0000000000001111
	//        7                 8           10                15
	// dword
	// 00000000000010000000000000000111   00000000000011110000000000001010    
	//          524295								983050
	//qwords
	//0000000000001111000000000000101000000000000010000000000000000111
	
	char name[7];
	cout << "String Instruction Example: "<<STOSB_Example(name);
	char buff[100];

	STOSB_ExampleEx(buff, 100, '*');	
	return 0;
}