#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;
class IAnimal
{
public:
	virtual void make_sound()=0;
};

class CDog : public IAnimal
{
public:
	void make_sound()
	{
		cout << "woof!" << endl;
	}
};

class CNullAnimal : public IAnimal
{
public:
	void make_sound()
	{
		cout << endl;
	}
};
int main()
{
	auto dog = unique_ptr<IAnimal>(new CDog());
	auto null = unique_ptr<IAnimal>(new CNullAnimal());
	null->make_sound();
	dog->make_sound();
	return 0;
}

