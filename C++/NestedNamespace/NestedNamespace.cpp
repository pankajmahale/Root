#include "stdafx.h"

//namespace x::y::z
//{
//
//}
namespace A
{
	namespace B
	{
		namespace C
		{
			class CFoo
			{
			};
		}
	}
}


namespace A
{
	namespace B
	{
		namespace C
		{
		}
		class CFoo
		{

		};
	}
}

int main()
{
	A::B::C::CFoo x;
	A::B::CFoo y;
    return 0;
}

