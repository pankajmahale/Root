//#include "stdafx.h"
#include<vector>
#include<string>
#include<iostream>
class CFoo
{ 
	void foo(int a)
	{
		std::cout << "void foo(int a)";
	}
	void foo(int a)const
	{
		std::cout << "	void foo(int a) const";
	}
	void foo(int& a)
	{
		std::cout << "	void foo(int& a)";	
	}
	void foo(int& a) const
	{
		std::cout << "	void foo(int& a)const";	
	}
	void foo(const int& a)
	{
	}
	void foo(const int& a) const
	{}
	void foo( unsigned int a)
	{
	}
};
int main()
{
	//std::vector<CFoo> vecFoo{ {1,"pankaj"},{2,"raman"} };
    return 0;
}

