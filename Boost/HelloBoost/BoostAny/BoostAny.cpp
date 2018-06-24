// Any.cpp : Defines the entry point for the console application.
//Any:
//	any_cast returns a copy of data
//	Dynamic storege runtime
//	can be empty
//
//Variant:
//	uses stack based storage
//	can not be empty
//	get returns the ref of the data

#include"boost/any.hpp"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	boost::any x, y, z;
	x = 100;
	y = "hiiii...";
	x = 9090;
	z = 10.65;

	//cout << x; won't work
	cout << boost::any_cast<int>(x);    // short,long,unsigned int will throw exception of bad_any_cast
	cout << boost::any_cast<double>(z); // float will throw exception

	int i;
	boost::any p = &i;
	int* pInt = boost::any_cast<int*>(p);

	vector < boost::any > m;
	m.push_back(2);
	m.push_back("pankaj");
	m.push_back(p);
	m.push_back(boost::any());// empty or place holder


	boost::any a;
	if (a.empty())
	{
		cout << "a is empty";
	}

	cout << a.type().name() << endl; //void
	a = 56;

	cout << a.type().name() << endl;//int
	if (x.type() == typeid(int))
	{
		cout << "its int" << endl;
	}

	a = 56.7;
	cout << a.type().name() << endl;//double

	struct Property
	{
		string name;
		boost::any value;
	};
	vector<Property> properties;
	properties.push_back({ "Name","pankaj" });
	properties.push_back({ "Age",30 });
	properties.push_back({ "salary",30.66 });
	return 0;
}

