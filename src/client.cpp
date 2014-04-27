#include <memory>
#include "cl/cl.hpp"

using namespace WeNeedMetal::cl;

int main()
{
	{
		Client client;
	} //このカッコはデストラクタを明示的に呼び出すために必要
	return 0;
}
