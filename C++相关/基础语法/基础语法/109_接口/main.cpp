#include <iostream>
#include <cstring>
using namespace std;

class Pet
{
public:
	virtual ~Pet() {}
	virtual void eat() = 0;	// 纯虚函数
};


class Cat : public Pet
{
public:
	virtual void eat() override	// 子类声明了同名eat函数，就会隐藏父类eat
	{
		cout << "Cat eat!!!" << endl;
	}
};

int main(int argc, char* argv[])
{
	Pet* pPet = new Cat();
	pPet->eat();
	delete pPet;
	return 0;
}



