#include <iostream>
#include <Windows.h>
#include "IceCreamFactoryProxy.hpp"
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	IceCreamFactoryIntf *p = new IceCreamFactoryProxy();
	p->getIceCream();

	delete p;
	return 0;
}
