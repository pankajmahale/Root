// GetValueFromASM.cpp : Defines the entry point for the console application.
// inc : inc, myByte ; add sets the CF inc does not
// dec : dec, myByte 
// xchg
//
//
//JMP [reg/mem/label]
//eg: jmp mylabel
//	  mov rax,mylabel
//    jmp rax
//	  mov rax, MyLabel
//	  lea rax, MyLabel
//	  jmp rax
//    jmp MyLabel+5

//CMP (same as sub doesnot store the result)
//
//
//JE/JZ
//JNE/JNZ
//JL/JB
//JLE
//JG/JA
//JGE

#include "stdafx.h"
#include <iostream>
extern "C" int GetValueFromASM();
int main()
{
	std::cout << "asm said " << GetValueFromASM() << std::endl;
	std::cin.get();
	return 0;
}

