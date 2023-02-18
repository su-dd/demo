#include <iostream>
#include <cstring>
using namespace std;

class Pet
{
public:
	void eat()	// 定义eat函数
	{
		cout << "Pet eat!!!" << endl;
	}
};


class Cat : public Pet
{
public:
	void eat(int num)	// 子类声明了同名eat函数，就会隐藏父类eat
	{
		cout << "Cat eat!!!" << endl;
	}
};

int main(int argc, char* argv[])
{
	Cat* pCat = new Cat();
	// pCat->eat(); // eat() 函数被隐藏，无法被调用
	pCat->eat(1);
	delete pCat;

	Pet* pPet = new Cat();
	pPet->eat();
	delete pPet;

	return 0;
}


