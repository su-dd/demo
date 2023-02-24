#include <iostream>
#include <cstring>
using namespace std;

class Cat
{
public:
	Cat(int num)
		: m_num(num)
	{
		cout << "猫: " << this->m_num << " 出生了" << endl;
	}

	~Cat()
	{
		cout << "猫: " << this->m_num << " 嗝屁了" << endl;
	}

	void eat()
	{
		cout << "猫: " << this->m_num << " 在吃鱼 " << endl;
	}
public:
	int m_num;
};

int main(int argc, char* argv[])
{
	{ // 添加作用域，让 cat析构
		Cat cat(1);
		cat.eat();
	}

	Cat *pCat = new Cat(2);
	pCat->eat();
	delete pCat;

	return 0;
}


