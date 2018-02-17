#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;

class IHandler
{
public:
	IHandler* m_successor;
	void SetSuccessor(IHandler* successor)
	{
		m_successor = successor;
	}
	virtual void HandleRequest(int request) = 0;
};

class ConcreteHandler1 : public IHandler
{
public:
	void HandleRequest(int request) override
	{
		if (request >= 0 && request < 10)
		{
			cout << "ConcreteHandler1 handeled the request"<<request << endl;
		}
		else if (m_successor != nullptr)
		{
			m_successor->HandleRequest(request);
		}
	}
};

class ConcreteHandler2 : public IHandler
{
public:
	void HandleRequest(int request) override
	{
		if (request >= 10 && request < 20)
		{
			cout << "ConcreteHandler2 handeled the request" << request << endl;
		}
		else if (m_successor != nullptr)
		{
			m_successor->HandleRequest(request);
		}
	}
};


class ConcreteHandler3 : public IHandler
{
public:
	void HandleRequest(int request) override
	{
		if (request >= 20 && request < 30)
		{
			cout << "ConcreteHandler3 handeled the request" << request<<endl;
		}
		else if (m_successor != nullptr)
		{
			m_successor->HandleRequest(request);
		}
	}
};
int main()
{
	auto h1 =  ConcreteHandler1();
	auto h2 =  ConcreteHandler2();
	auto h3 =  ConcreteHandler3();

	h1.SetSuccessor(&h2);
	h2.SetSuccessor(&h3);

	int requests[] = { 2, 5, 14, 22, 18, 3, 27, 20 ,90,99};
	for (int i = 0; i < 9; i++)
	{
		h1.HandleRequest(requests[i]);
	}
	return 0;
}

