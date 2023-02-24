#include <iostream>
using namespace std;

/*
* 引用
* 类型 & 引用变量名 = 引用实体；
*/
void test1()
{
	int a = 1;		// 声明并初始化 int 类型变量 a
	int& b = a;		// 定义引用类型 b，指向 变量a
	cout << b << endl;
	int& c = b;		// 定义引用类型 b，指向 变量b
	cout << c << endl;

	cout << &a << endl; // 输出a的内存地址
	cout << &b << endl; // 输出b的内存地址
	cout << &c << endl; // 输出c的内存地址
}


/*
* 指针
*/
void test2()
{
	int a = 1;		// 声明并初始化 int 类型变量 a
	int* ptr;		// 声明int类型指针 ptr
	ptr = &a;		// 让指针ptr指向 变量a 的地址
	cout << ptr  << endl;	// 输出 指针指向的地址
	cout << *ptr << endl;	// 输出 指针指向的地址的值
	cout << &ptr << endl;	// 输出 指针的地址
}


/*
* malloc 和 free 的一般形式：
* 
* void *malloc(size_t size) 
* void free(void *ptr)
* 
* malloc 分配指定大小为 size字节的内存空间，返回一个指向该空间的void*指针。
* 由于返回 void* 指针，所以需要强制类型转换后才能引用其中的值。
* 
* free 释放一个由 malloc 所分配的内存空间。ptr 指向一个要释放内存的内存块，
* 该指针应当是之前调用 malloc 的返回值。
* 
*/
void test3()
{
	int* ptr = nullptr; // 通常指针变量声明时，就应该初始化；如果暂不确定值，可以赋空，防止野指针。
	ptr = (int*)malloc(sizeof(int)); // 申请一个int大小的堆内存，并进行强制类型转换
	*ptr = 1; // 对ptr指向的位置赋值
	cout << *ptr << endl; // 输出 指针的值
	cout << ptr << endl; // 输出 指针指向的地址
	free(ptr);
	cout << ptr << endl; // 输出 指针指向的地址
	cout << *ptr << endl; // 输出 指针的值
	ptr = nullptr;
}


/*
* new & delete 的一般形式：
* 
* 类型* 指针名 = new 类型();
* delete 指针名
* 
* new 按照类型的大小，分配内存。
* delete 释放指针指向地址的内存，这是指针依然指向对应地址，不为空。
* 通常会在 delete 后，增加一个 给指针变量赋空的操作；防止野指针。
*/
void test4()
{
	int* ptr = new int(4);	// 声明并初始化 int类型 指针 ptr
	cout << ptr << endl;	// 输出 ptr 指向的地址
	cout << *ptr << endl;	// 输出 ptr 指向地址的值
	delete ptr;
	cout << ptr << endl;	// 输出 ptr 指向的地址
	cout << *ptr << endl;	// 输出 ptr 指向地址的值
	ptr = nullptr;
}

int main(int argc, char* argv[])
{
	// test1();
	// test2();
	// test3();
	test4();
	return 0;
}