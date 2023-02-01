#include <iostream>
using namespace std;

/*
* 已知数组大小，和所有元素的值。
*/
void demo1()
{
	int array[2] = { 1, 2 };
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << sizeof(array) << endl;
}

/*
* 已知数组大小，和有元素的值，且值相同。
*/
void demo2()
{
	int array[3] = { 1 };
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << sizeof(array) << endl;
}

/*
* 已知数组大小，值暂不清晰。
*/
void demo3()
{
	int array[2];
	array[0] = 0;
	array[1] = 1;
	cout << array[0] << endl;
	cout << array[1] << endl;
}

/*
* 未初始化的数据为当前内存位置存的随机值。
*/
void demo4()
{
	int array1[2];
	cout << array1[0] << endl;
	cout << array1[1] << endl;

	int array2[2] = { 0 };
	cout << array2[0] << endl;
	cout << array2[1] << endl;
	cout << array2[2] << endl;
}

/*
* malloc & free
* 
*/
void demo5()
{
	int n = 2; // 定义数组的大小
	int* grade = (int*)malloc(sizeof(int) * n); // 创建数组 数组大小：int类型的大小 * n 。

	cout << sizeof(grade) << endl; // 输出 grade 大小
	cout << grade << endl;		// 输出：指针的执行的位置
	cout << &grade[0] << endl;	// 输出：数组0号位的位置 
	cout << &grade[1] << endl;	// 输出：数组1号位的位置

	// 输出默认值
	cout << grade[0] << endl;
	cout << grade[1] << endl;

	grade[0] = 0; // 给数组0号位赋值
	grade[1] = 1; // 给数组1号位赋值
	// 输出 赋值后结果
	cout << grade[0] << endl;
	cout << grade[1] << endl;

	free(grade);
}


/*
* new & delete
* 
* 需要注意的是 数组的操作符为 new[] 和 delete[]
*
*/
void demo6()
{
	int n = 1; // 定义数组的大小
	int* grade = new int[n]; // 创建数组 数组大小：int类型的大小 * n 。

	cout << sizeof(grade) << endl; // 输出 grade 大小
	cout << grade << endl;		// 输出：指针的执行的位置
	cout << &grade[0] << endl;	// 输出：数组0号位的位置 
	cout << &grade[1] << endl;	// 输出：数组1号位的位置

	// 输出默认值
	cout << grade[0] << endl;
	cout << grade[1] << endl;

	grade[0] = 0; // 给数组0号位赋值
	grade[1] = 1; // 给数组1号位赋值
	// 输出 赋值后结果
	cout << grade[0] << endl;
	cout << grade[1] << endl;

	delete[] grade;
}

int main(int argc, char* argv[])
{
	// demo1();
	// demo2();
	// demo3();
	// demo4();
	// demo5();
	// demo6();
	return 0;
}


