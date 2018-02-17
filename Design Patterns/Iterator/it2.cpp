// ConsoleApplication1.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include<iostream>
#include<memory>
using namespace std;
class StackIter;
class CStack
{
	int m_iItem[10];
	int sp;
public:
	friend class StackIter;
	CStack() :sp(-1)
	{
	}
	void push(int in)
	{
		m_iItem[++sp] = in;
	}
	int pop()
	{
		return m_iItem[sp--];
	}
	bool isEmpty()
	{
		return (sp == -1);
	}
	unique_ptr<StackIter> createIterator()const;
	// below code will not work here 
	//unique_ptr<StackIter> CStack::createIterator()const
	//{
	//	auto ptr = unique_ptr<StackIter>(new StackIter(this));
	//	return ptr;
	//}
};



class StackIter
{
	const CStack *stk;
	int index;
public:
	StackIter(const CStack *s)
	{
		stk = s;
	}
	void first()
	{
		index = 0;
	}
	void next()
	{
		index++;
	}
	bool isDone()
	{
		return index == stk->sp + 1;
	}
	int currentItem()
	{
		return stk->m_iItem[index];
	}
};

unique_ptr<StackIter> CStack::createIterator()const
{
	auto ptr = unique_ptr<StackIter>(new StackIter (this));
	return ptr;
}
int main()
{	
	CStack sp;
	sp.push(10);
	sp.push(20);
	sp.push(30);
	sp.push(40);
	sp.push(50);
	sp.push(60);
	{}
	auto it = sp.createIterator();
	for (it->first(); !it->isDone(); it->next())
	{
		cout << it->currentItem() << endl;
	}
	return 0;
}


