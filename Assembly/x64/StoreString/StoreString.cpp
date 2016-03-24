// Store String instuction (rdi,rax,rcx are used implisitly  )
//STOS [mem] 8/16,32,64
//STOSB increment rdi by 1
//STOSW increment rdi by 2
//STOSD increment rdi by 4
//STOSQ increment rdi by 8
//REP prefix repeats the the instucion RCX time




//Scan String
//REPE/REPZ   : Repeat the instruction while zero flag = 1 or  RCX !=0
//REPNE/REPNZ : Repeat the instruction while zero flag = 0 or  RCX !=0
//SCAS
//SCASB
//SCASW
//SCASD
//SCASQ

char	  arr1[5];
short int arr2[5];
int		  arr3[5];
long long	  arr4[5];

extern "C" void FillChar(char* p);
extern "C" void FillShort(short* p);
extern "C" void FillInt(int* p);
extern "C" void FillLong(long long* p);

extern "C" void ZeroMemory(void* address,int Length);

char searchString[] = "Pankaj";
extern "C" bool SarchChar(void* address, char ch,int size);
#include<iostream>
using namespace std;


int main(int argc, char* argv[])
{
	FillChar(arr1);
	FillShort(arr2);
	FillInt(arr3);
	FillLong(arr4);
	ZeroMemory(arr1, 5);
	cout << "Pankaj " << (SarchChar(searchString, 'P', 6) ?  "have P in it" : "dont have P in it");
	cout << "Pankaj " << (SarchChar(searchString, 'Z', 6) ? "have Z in it" : "dont have Z in it");

	return 0;
}