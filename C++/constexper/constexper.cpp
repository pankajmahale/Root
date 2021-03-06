#include "stdafx.h"

constexpr  int add(int a, int b)
{
	return a + b;
}

constexpr int fibo(int num)
{
	switch (num)
	{
	case 0:
		return 0;
	case 1:
		return 1;
	default:
		return fibo(num - 1) + fibo(num - 2);
	}
}

int main()
{
	int x{ 3 }, y{ 5 };
	static_assert(add(9, 4) == 13, "Error......");// use of x y result into error;
	static_assert(fibo(10) == 55, "Error......"); // use of x y result into error;
    return 0;
}

