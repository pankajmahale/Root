#include "stdafx.h"
#include<vector>
#include<string>
class CFoo
{
	int id;
	std::string name;
public:
	CFoo(int _id,std::string _name) : id(_id),name(_name)
	{
	}
};
int main()
{
	std::vector<CFoo> vecFoo{ {1,"pankaj"},{2,"raman"} };
    return 0;
}

