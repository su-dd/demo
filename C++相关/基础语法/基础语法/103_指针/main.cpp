#include <iostream>
using namespace std;

void test1()
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

void test2()
{
	int* ptr;
	ptr = (int*)malloc(sizeof(int)); // 申请一个int大小的堆内存，并进行强制类型转换
	*ptr = 1; // 对ptr指向的位置赋值
	cout << *ptr << endl; // 输出
	free(ptr);
}


void test3()
{

}

int main(int argc, char* argv[])
{
	// test1();
	test2();
	return 0;
}