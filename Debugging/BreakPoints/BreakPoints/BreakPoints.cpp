// BreakPoints.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (i == 75)
		{
			__asm
			{
				int 3;
			}
		}
	}
    return 0;
}

