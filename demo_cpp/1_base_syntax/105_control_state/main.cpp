#include <iostream>

using namespace std;

/*
* switch demo 1
*/ 
void switch_demo_1()
{
	int a = 2;
	switch (a)
	{
	case 1:
		cout << "case 1" << endl;
		break;
	case 1 + 1:
		cout << "case 2" << endl;
		break;
	default:
		cout << "case default" << endl;
		break;
	}
}

/*
* switch demo 2
*/
void switch_demo_2()
{
	// switch demo 2
	switch (1 + 1)
	{
	case 1 + 0:
		cout << "case 1" << endl;
	case 2:
		cout << "case 2" << endl;
	default:
		cout << "case default" << endl;
		break;
	}
}

/*
* while
* 
* 计算 1 + 2 + 3 + ··· + 10 的结果
*/

void while_demo()
{
	int i = 1;
	int amont = 0;
	while (i <= 10)
	{
		amont += i;
		i++;
	}
	cout << amont << endl;
}

/*
* do...while
*
* 计算 1 + 2 + 3 + ··· + 10 的结果
*/
void do_while_demo()
{
	int i = 1;
	int amont = 0;
	do
	{
		amont += i;
		i++;
	} while (i <= 10);
	cout << amont << endl;
}

/*
* for
*
* 计算 1 + 2 + 3 + ··· + 10 的结果
*/
void for_demo()
{
	int amont = 0;
	for (int i = 1; i <= 10; i++)
	{
		amont += i;
	}
}

/*
* try...catch
* 
* 
* 
*/

void try_catch_deom()
{
	try
	{
		cout << "This is before throw" << endl;
		throw 1.1;
		cout << "This is after throw" << endl;
	}
	catch (int num)
	{
		cout << "This is catch int" << endl;
	}
}


int main(int argc, char* argv[])
{
	try
	{
		try_catch_deom();
		cout << "this is after demo" << endl;
	}
	catch (...)
	{
		cout << "This is catch ..." << endl;
	}
	return 0;
}


