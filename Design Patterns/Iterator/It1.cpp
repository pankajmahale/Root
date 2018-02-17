#include<iostream>
#include <array>
using namespace std;
class ConcreteIterator;
class ConcreteAggregate;
class Iterator
{
public:
	virtual int fisrt()=0;
	virtual int next()=0;
	virtual int previous()=0;
	virtual int last()=0;
	virtual int operator ++() =0;
	virtual int operator --() =0;
};
class IAggregate
{
public:
	virtual Iterator* CreateIterator() =0;
};

class ConcreteIterator : public Iterator
{
	ConcreteAggregate* m_aggregate;
	int m_current = 0;
public:	
	ConcreteIterator(ConcreteAggregate& aggregate):m_aggregate(aggregate)
    {
    }
	int fisrt()
	{
		return 0;//m_aggregate->operator[](0);
	}
	int next()
	{
		return 0;
	}
	int previous()
	{
		return 0;
	}
	int last()
	{
		return m_aggregate[2];
	}	
	int operator ++() 
	{
		return  0;
	}
	int operator --()
	{
		return  0;
	}
};

class ConcreteAggregate : public IAggregate
{
	array<int,10> m_arr;
public:
	Iterator* CreateIterator()
	{
		auto it =new ConcreteIterator(*this);		 
		return dynamic_cast<Iterator*>(it);
	}
	int& operator[](const int a)
	{
		return m_arr[a];
	}
};
int main(int argc, char** argv)
{
	ConcreteAggregate ca;
	ca[0]=10;
	ca[1]=20;
	ca[2]=30;
	ca[3]=40;
	ca[4]=50;
	ca[4] = ca[3];
	
	return ca[3];
}