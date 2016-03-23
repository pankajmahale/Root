#include <iostream>
extern "C" int ReadConsole();
int main()
{
	std::cout << "asm said " << ReadConsole() << std::endl;
	std::cin.get();
	return 0;
}