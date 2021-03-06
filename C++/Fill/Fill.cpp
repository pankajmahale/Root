#include "stdafx.h"
#include<vector>
#include<numeric>  //std::iota
#include<algorithm>
#include<cstdlib>  //std::rand
#include<ctime>    //std::time
#include<string>
#include<iostream>
#include<random>
template<typename T>
auto print(std::string const& msg, T const & container)->void
{
	std::cout << msg;
	std::for_each(begin(container), end(container), [](auto elem)
	{
		std::cout << elem << " ";
	});
	std::cout << std::endl;
}
unsigned int gen()
{
	static int i = 0;
	return ++i;
}
int main()
{
	// using std::iota. V1 holds the value from 100 to 109
	std::vector<int> v1(10);
	std::iota(std::begin(v1), std::end(v1), 100);
	print("using std::iota: ", v1);

	// using fill. v2 holds value 1 for all elements.
	std::fill(begin(v1), end(v1), 1);
	print("using std::fill: ", v1);
	
	//fill_n
	fill_n(begin(v1), 5, 2);
	print("using std::fill_n: ", v1);
	
	//generate
	int index{ 1 };
	std::generate(begin(v1), end(v1), [&index]() 
	{
		return 10 * index++;
	});
	print("using generate: ", v1);
	
	std::srand(std::time(nullptr)); // use current time as seed for random generator
	std::generate(begin(v1), end(v1),std::rand);
	print("using generate,rand: ", v1);
	
	std::generate_n(begin(v1), 5, []() {return std::rand() % 100; });
	print("using generate_n,rand: ", v1);

	std::random_device rd;
	auto x = rd();
	std::generate(begin(v1), end(v1), rd);
	return 0;

}

