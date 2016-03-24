// Dividing and Multiplying Integers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
extern "C" int Multiply(int a, int b);
extern "C" int Divid(int a, int b);
extern "C" int Remainder(int a, int b);
int foo(int a, int b, int c, int d,int k , int f)
{
	

	return (a + b + c + d);
}
int main()
{
	int a = 10;
	int b = 30;
	int c = 50;
	int d = 50;
	foo(a,b,c,d,a+4,b+8);
	cout << Multiply(20, 40)<<endl;
	cout << Divid(25, -4) << endl;
	cout << Remainder(25, -4) << endl;
	cin.get();
	return 0;
}

