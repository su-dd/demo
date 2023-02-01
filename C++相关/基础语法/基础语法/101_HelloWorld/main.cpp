#include <iostream>
#include <string>
using namespace std;

/*
	这是一个 demo 程序
*/


int main(int argc, char* argv[])
{
	cout << "Hello World!" << endl;

	cout << "请输入你的名字：";
	string name; // 请输入你的名字
	cin >> name;
	cout << "你好！" << name << endl;

	return 0;
}