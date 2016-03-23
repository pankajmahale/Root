// GetValueFromASM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
extern "C" int GetValueFromASM();
int main()
{
	std::cout << "asm said " << GetValueFromASM() << std::endl;
	std::cin.get();
    return 0;
}

