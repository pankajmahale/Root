//Use of the CPUID instruction is fairly basic, you move a function number into EAX and call CPUID.
//The requested information is returned in EAX, EBX, ECX and EDX.
#include<iostream>
using namespace std;
extern "C" bool GetCUPIDSupport();
extern "C" char*  GetVendorString();
extern "C" int  GetLogicalProcessor();

int main(int argc, char** argv)
{
	if (!GetCUPIDSupport())
	{
		cout <<"CPU doesn't support CPUID instuction";
		return 0;
	}
	cout <<"CPU supports CPUI instuction" <<endl;
	cout <<"CUP is : "<< GetVendorString() << endl;
	cout << "Logical Processor is : " << GetLogicalProcessor() << endl;
	cin.get();
	return 0;
}