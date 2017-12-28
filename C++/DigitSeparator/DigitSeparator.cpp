#include "stdafx.h"
#include<iostream>

template <typename T, typename R>
auto add(T a, R b)
{
	return a + b;
}

int main()
{
	int a = 10'000'000;
	int b = 0b1010;
	int c = 0B1010'0001;
	//int d = 0b124; //compiler error
	auto x = add(a, b);
    return 0;
}

