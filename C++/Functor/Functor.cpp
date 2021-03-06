#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
// Functor can remember stare

class CFoo
{
	int val = 0;
public:
	CFoo()
	{
	}
	CFoo(int _val) :val(_val)
	{
	}
	void operator()(int a)
	{
		std::cout << val + a<<std::endl;
	}
	void operator()(int a, int b) { std::cout << "two argument\n"; }
	//conversion function 
	operator std::string() const { return std::to_string(val); }   // CFoo f1; std::string s = f1;
};
void add1(int i)
{
	std::cout << i + 2 << std::endl;
}
int val = 2;
void add2(int i)
{
	std::cout << i + val << std::endl;
}

template <int val>
void add3(int i)
{
	std::cout << i + val << std::endl;
}

int main()
{
	CFoo(2)(3,5);// Parameterized function

	std::vector<int> vec{ 2,4,6,7 };

	std::cout << "1st Way....\n";
	std::for_each(begin(vec), end(vec), add1);

	std::cout << "2st Way....\n";
	std::for_each(begin(vec), end(vec), add2);//Global variable not good

	std::cout << "3ed Way....\n";
	std::for_each(begin(vec), end(vec), add3<2>);//Only constant. you can not use variable variable not good

	std::cout << "4th and best Way ....\n";
	std::for_each(begin(vec), end(vec), CFoo(2));//Only constant. you can not use variable variable not good

	/*
		+------------------------------------------------------+
		|   Built in functors                                  |
		|	Header File: funtional                             |
		+------------------------------------------------------+

		less, greater,greater_equal,less_equal,not_equal_to
		logical_and,logical_not,logical_or
		multiplies,minus,plus,dividesid,modulus,negare

	*/
	auto c0 = std::less<int>()(9,6); //9*6 ; result = 54
	auto c1 = std::greater<int>()(6, 3);
	auto c2 = std::greater_equal<int>()(5, 5);
	auto c3 = std::less_equal<int>()(81, 9);
	auto c4 = std::not_equal_to<long>()(56, 6);
	auto cx = std::negate<int>()(67);

	auto r0 = std::multiplies<int>()(9,6); //9*6 ; result = 54
	auto r1 = std::minus<int>()(6, 3);
	auto r2 = std::plus<int>()(5, 5);
	auto r3 = std::divides<int>()(81, 9);
	auto r4 = std::modulus<long>()(56, 6);
	auto rx = std::negate<int>()(67);

	auto r5 = std::logical_and<int>()(5, 5);
	auto r6 = std::logical_or<int>()(81, 9);
	auto r7 = std::logical_not<long>()(56);

	std::cout << "4th and best Way ....\n";
	std::for_each(begin(vec), end(vec), CFoo(2));//Only constant. you can not use variable variable not good

	std::cout << "4th and best Way ....\n";
	std::for_each(begin(vec), end(vec), CFoo(2));//Only constant. you can not use variable variable not good

	std::cout << "4th and best Way ....\n";
	std::for_each(begin(vec), end(vec), CFoo(2));//Only constant. you can not use variable variable not good

	std::cout << "4th and best Way ....\n";
	std::for_each(begin(vec), end(vec), CFoo(2));//Only constant. you can not use variable variable not good

	std::cout << "4th and best Way ....\n";
	std::for_each(begin(vec), end(vec), CFoo(2));//Only constant. you can not use variable variable not good

	std::cout << "4th and best Way ....\n";
	std::for_each(begin(vec), end(vec), CFoo(2));//Only constant. you can not use variable variable not good

    return 0;
}

