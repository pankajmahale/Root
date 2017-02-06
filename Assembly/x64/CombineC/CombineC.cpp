// C++ code to demonstrate x64 assembly file linking
#include <iostream>
using namespace std;
double CombineC(int a, int b, int c, int d, int e, double f)
{
     return (a+b+c+d+e)/(f+1.5);
}

extern "C" double CombineA(int a, int b, int c, int d, int e, double f);

int main(void)
{
     cout << "CombineC: " << CombineC(1,2,3,4, 5, 6.1) << endl;
     cout << "CombineA: " << CombineA(1,2,3,4, 5, 6.1) << endl;
     return 0;
}
