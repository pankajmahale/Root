#include<boost\optional.hpp>
#include <deque>
#include<iostream>
using namespace std;
class test

{
	int a;
};
deque<char> dq;
boost::optional<char> get_data()
{
	if (!dq.empty())
		return  boost::optional<char>(dq.back());
	else
		return  boost::optional<char>();
}

int main()
{
	boost::optional<char> op; // uninitialized , no char is constructed.
	op = 'A';
	if (!op) // op!=0
	{
		cout << "No Data is avilabel";
	}
	else
	{
		cout << op.get(); // crash if op is uninitialized
		cout << *op;
	}
	op.reset(); //reset the op to uninitialize state;

	op.get_value_or('z');// return z if op is empty;
	auto p = op.get_ptr();

	// optional can store any kind of data
	struct A { string name; int val; };
	A a;
	boost::optional<A> opA0; // constructior of a is not called;
	boost::optional<A> opA(a); // a is copy constructed;
	cout << opA->name << "   " << opA->val;

	// pointer
	boost::optional<A*> opAP(&a);
	(*opAP)->name = "ff";
	(*opAP)->val = 1000;

	// Reference 
	boost::optional<A&> opAR(a);
	opAR->name = "ff";
	opAR->val = 1000;

	// Relational operator
	boost::optional<int>  i1(1);
	boost::optional<int>  i2(10);
	boost::optional<int>  i3; // its smaller the any val
	if (i1 < i2)
		cout << "i2 is biggeer";
	i1 = -10;
	if (i1 < i3)
		cout << "i2 is biggeer";



	return 0;
}