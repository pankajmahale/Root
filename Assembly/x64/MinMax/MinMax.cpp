// MinMax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
extern "C" int Min();
extern "C" int Max();
extern "C" int MyTest();
using namespace std;

int main()
{
	cout << "Minimum number is :" << Min() << endl;
	cout << "Maximum number is :" << Max() << endl;
	cout << "MyTest Says :" << MyTest() << endl;

    return 0;
}

