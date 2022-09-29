#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
	cout << "Hello World!" << endl;

	cout << "请输入你的名字：";
	string name;
	cin >> name;
	cout << "你好！" << name << endl;

	return 0;
}