#include <iostream>
using namespace std;

int b = 2;	// b 为 全局变量

int add(int a, int b) // a、b 为 形式参数（简称：形参）
{
	cout << "函数 ： " << endl;
	cout << "a ： " << a << endl;
	cout << "b ： " << b << endl;
	return a + b;
}

int main(int argc, char* argv[])  // argc、argv 为 形式参数（简称：形参）
{
	int a = 1; // a 为 局部变量；

	{
		int a = add(b, 1);	// a 为 局部变量； b 为 全局变量
		cout << "a ： " << a << endl;
	}

	cout << "a ： " << a << endl;
	return 0;
}


