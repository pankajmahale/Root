#include<iostream>
#include<iomanip>
#include<limits>
#define WIDHT 20
using namespace std;

int main()
{
	cout << "C++ Datatypes\n";
	//char
	cout <<setw(WIDHT)<< "char" <<setw(WIDHT) <<sizeof(char)<<setw(WIDHT)<< int( numeric_limits<char>::min())<<setw(WIDHT)<<int( numeric_limits<char>::max())<<endl;
	
	//int
	cout <<setw(WIDHT)<< "short"  <<setw(WIDHT) <<sizeof(short)<<setw(WIDHT)<< numeric_limits<short>::min()<<setw(WIDHT)<<numeric_limits<short>::max()<<endl;
	cout <<setw(WIDHT)<< "unsigned short"  <<setw(WIDHT) <<sizeof(unsigned short)<<setw(WIDHT)<< numeric_limits<unsigned short>::min()<<setw(WIDHT)<<numeric_limits<unsigned short>::max()<<endl;
	cout <<setw(WIDHT)<< ""  <<setw(WIDHT) <<sizeof(int)<<setw(WIDHT)<< numeric_limits<int>::min()<<setw(WIDHT)<<numeric_limits<int>::max()<<endl;
	cout <<setw(WIDHT)<< "int"  <<setw(WIDHT) <<sizeof(int)<<setw(WIDHT)<< numeric_limits<int>::min()<<setw(WIDHT)<<numeric_limits<int>::max()<<endl;
	cout <<setw(WIDHT)<< "int"  <<setw(WIDHT) <<sizeof(int)<<setw(WIDHT)<< numeric_limits<int>::min()<<setw(WIDHT)<<numeric_limits<int>::max()<<endl;



	// comapre 
	unsigned char *x ='t';
	signed char y = {'t'};
	if (typeid(x) == typeid(x))
	{
		cout << "same";
	}
	else
	{
		cout << "diff";
	}
	int *h = 1190;
	x = h;
	//x = y;
	//y = x;
    return 0;
}

