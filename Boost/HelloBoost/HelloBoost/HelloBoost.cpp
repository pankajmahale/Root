#include<iostream>
#include<typeinfo>
#include<vector>
using namespace std;
#include <boost\variant.hpp>

void foo (boost::variant<int, string> v)
{

}

class fooVisitor : public boost::static_visitor<>
{
public:
	void operator() (int& i) const
	{
		cout << i;
	}
	void operator() (string& str) const
	{
		cout << str;
	}
};
int main()
{
	boost::variant<int, string> u1, u2;
	u1 = 100;
	u2 = "Pankaj";
	cout << u1 << "\t" << u2 << endl;
	//u1 = u1 + 100; wont work as + operator is not overloaded.
	u1 = boost::get<int>(u1) * 2;
	cout << u1 << "\t" << u2 << endl;
	try
	{
		cout << typeid(u1).name();
		string st = boost::get<string>(u1);
	}
	catch (boost::bad_get & e)
	{
		cout << e.what()<<endl;
	}

	boost::variant<int, string> u4;
	boost::variant<string,int> u5;
	//cout << u4 << "\t"<<typeid(boost::get<string>(u5)).name();
	u4 = 420;
	boost::apply_visitor(fooVisitor(), u4);
	u4 = "Hello";
	boost::apply_visitor(fooVisitor(), u4);

	vector<boost::variant<int, string>> v;
	v.push_back("Helloo");
	v.push_back(50);
	v.push_back("Byeeee");
	v.push_back(1000);
	v.push_back("Dhola");
	cout << "-----------------------------------";
	fooVisitor f;
	for (auto&x : v)
	{
		boost::apply_visitor(f, x);
		cout << endl;
	}
	return 0;
}
