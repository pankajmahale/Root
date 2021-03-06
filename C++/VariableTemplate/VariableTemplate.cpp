#include<chrono>
#include<memory>

//Generic lambda
auto lambda = [](auto a, auto b) { return a * b; };

//Extended capturing in lambdas
auto timer = [val = std::chrono::system_clock::now()] { return std::chrono::system_clock::now() - val; };
int main()
{
	auto time = timer();   // returns time since timer creation
	auto p = std::make_unique<int>(10);
	auto lmb = [p = std::move(p)]{ return *p; };
	auto r = lmb();
    return 0;
}

