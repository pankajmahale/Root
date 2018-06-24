#include<iostream>

class CStudent
{
	int m_rollNo;
public:
	CStudent(int r) : m_rollNo(r)
	{

	}
	void foo() const
	{
		//m_rollNo = 100; wont work
		(const_cast<CStudent*>(this))->m_rollNo = 100;
	}
	 
};

int fun(int* ptr)
{
    return (*ptr + 10);
}

void Const_Cast()
{
	/*
		 const_cast: const_cast is used to cast away the constness of variables
		 1) const_cast can be used to change non-const class members inside a const member function. 
	*/
	
	//2) const_cast can be used to pass const data to a function that doesn’t receive const. 
	const int val = 10;
    const int *ptr = &val;
	//auto ret = fun(ptr);//error wont work
	auto ret = fun(const_cast<int*> (ptr));

	//3) It is undefined behavior to modify a value which is initially declared as const
	const int val1 = 10;
    const int *ptrx = &val;
    int *ptr1 = const_cast <int *>(ptrx);
    fun(ptr1);

	//4) const_cast is considered safer than simple type casting. 
	int a1 = 40;
    const int* b1 = &a1;
    //char* c1 = const_cast <char *> (b1); // compiler error
    //*c1 = 'A';

	//5) const_cast can also be used to cast away volatile attribute.
	int a2 = 40;
    const volatile int* b2 = &a2;
    std::cout << "typeid of b1 " << typeid(b2).name() << '\n';
    int* c1 = const_cast <int *> (b1);
    std::cout << "typeid of c1 " << typeid(c1).name() << '\n';
}

void Dynamic_Cast()
{
	//dynamic_cast<type> The dynamic_cast performs a runtime cast that verifies the validity of the cast. If the cast cannot be made, the cast fails and the expression evaluates to null.
	// work only on pollymorfic base class. it has runtime overhead because it checks object types at runtime using RTTI

	//Note 1: need at least one virtual function in base class. if virtual is not defined the program wont compile
	//Note 2: Return new type on successful converion
	//Note 3: return nullptr if cast fails for pointer type                D2 *r = dynamic_cast<D2*>d2
	//Note 4: throws an exception for reference type std:: bad_cast        D2 &r = dynamic_cast<D2&>d1;
	//Note 5: use static_cast if you are sure that you never cast to wrong type
	//https://www.youtube.com/watch?v=wE4beL95pIo
}

void Reinterpret_Cast()
{
	// cast any pointer to any other pointer. its bot portable
	//usefull scenario is structure
	struct s
	{
		int a;
		int b;
		int c;
	};
	s sObj{ 3,4,5 };
	int *p = reinterpret_cast<int*>(&sObj);
	std::cout << *p;
	p++;
	
	std::cout << *p;
	p++;

	std::cout << *p;
	p++;
}

int main()
{
	Const_Cast();
	Reinterpret_Cast();
	return 0;
}