// GetValueFromASM.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
/*
	32 bit aselmbly
	int GetValueFromASM()
	{
		_asm
		{
			mov eax, 100 // inline assembly is not spported in x64 bit mode.
		}
	}
*/
extern "C" int GetValueFromASM();
int main()
{
	std::cout << "asm said " << GetValueFromASM() << std::endl;
	std::cout << "sizeof long double is " << sizeof(long double);//8
	std::cin.get();
	return 0;
}

/*
=====================================================
16-bit
AX
BX
CX
DX

SI: Source  (manupilating string)
DI: Destination (manupilating string
BP: Base Pointer
SP: Stack Pointer

CS: Code Segment
DS: Data Segment
SS: Stack Segment
ES: Extra Segment

IP: you can not move data to ip

FLAG

=================================================================================
32-bit(386/486)
EAX
EBX
ECX
EDX

ESI: Source  (manupilating string)  NO BYTE VERION
EDI: Destination (manupilating string
EBP: Base Pointer
ESP: Stack Pointer

EIP

Segment pointer (16-bit)
FS
GS
CS: Code Segment
DS: Data Segment
SS: Stack Segment
ES: Extra Segment

=================================================================================
64-bit(386/486)
RAX
RBX
RCX
RDX

RSI: Source  (manupilating string)  ESI,SI but no byte version
RDI: Destination (manupilating string
RBP: Base Pointer
RSP: Stack Pointer

RIP		eip		ip


FS
GS
CS: Code Segment
no DS,SS,ES in 64-bit mode

// 8 new 64-bit register
r8		r8d		r8w		r8b
R9
r10
R11
R12
R13
R14
R15



============================================================================
x86 Instruction Set

instruction and variable names are not case sensitive

Three braod types of operand
1) Register
2) Memory
3) Immediate

syntex
	mov [reg/mem],[reg/mem/imm] both the operand cannot be mem. operand must be same size
	
	mov
	add rax,ebx ;error operand must be same size

	sub

	neg [reg/mem]
	inc [reg/mem] inc, myByte ; add sets the CF inc does not
	dec [rec/mem]
	exchg [reg/mem] [reg/mem]
	ret;
	lea rax, mybyte //loads the address of mybyte in rax

	jmp [reg/mem/label+offset]

	eg
		jmp mylabel

		mov rax mylabel
		;add rax+23 // jump to 23 byte ahead from label or jmp mylabel+23
		jmp rax


	cmp[reg/mem] [reg/mem/imm] (same as sub doesnot store the result)
	cmp rax, rbx

	conditional jumps
	JXX [label+offset] cant jump to reg or mem
	//JE/JZ
	//JNE/JNZ
	//JL/JB
	//JLE
	//JG/JA(unsigned comparision)  https://youtu.be/0tpOEdxtRkA?t=8m56s
	//JGE

	Fast calling convention
	==================================================
	passing parameters

	1		rcx			ecx		cx		cl
	2		rdx
	3		r8
	4		r9
	>4		stack


	=============================
	boolean Expression

	AND		
	OR
	NOT
	XOR













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

//CMP 
//
//

*/