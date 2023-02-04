#include <iostream>
#include <cstring>
using namespace std;

// 声明结构体 Student
struct Student
{
	int num;		// 学号
	char name[20];	// 姓名
	int age;		// 年龄
	double height;	// 身高 cm
	double weight;	// 体重 kg
}; // 定义全局对象 同学：a

union StudentU
{
	Student student;
	int key;
};

int main(int argc, char* argv[])
{
	StudentU a; // 定义同学：a
	a.student.num = 101;	// 学号为1
	strcpy(a.student.name, "小红");
	a.student.age = 4;
	a.student.height = 100;
	a.student.weight = 20.03;
	
	cout << "关键值：" << a.key << endl;

	return 0;
}


