#include<iostream>
#include<algorithm>
#include<numeric>//std::iota
#include<vector>
#include<string> 
#include<functional>

int main()
{
	std::vector<int> v1(10);
	std::iota(std::begin(v1), std::end(v1), 1); //1,2,3,4,5,6,7,8,9,10
	auto total = std::accumulate(std::begin(v1), std::end(v1), 0);

	auto total1 = std::accumulate(std::begin(v1), std::begin(v1)+4,1, std::multiplies<int>());

	auto oddTotal = std::accumulate(std::begin(v1), std::end(v1),0, [](auto const &sum,auto const& elem) 
	{
		return elem % 2 ? sum + elem : sum;
	});

	auto evenTotal = std::accumulate(std::begin(v1), std::end(v1),0, [](auto const &sum,auto const& elem) 
	{
		return elem % 2 == 0 ? sum + elem : sum;
	});            

	std::string output = std::accumulate(std::next(std::begin(v1)), std::end(v1), std::to_string(v1[0]), [](std::string a, int b) 
	{
		return a + "," + std::to_string(b);
	});
	return 0;
}

