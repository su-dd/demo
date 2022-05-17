// CMakeProject.cpp: 定义应用程序的入口点。
//

#include <iostream>
#include <Windows.h>
#include "StrawberryIceCreamImpl.h"
#include "NutIceCreamDecorator.h"
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	StrawberryIceCreamImpl().taste();
	NutIceCreamDecorator(new StrawberryIceCreamImpl()).taste();
	return 0;
}
