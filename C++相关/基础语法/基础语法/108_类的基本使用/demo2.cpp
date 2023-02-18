#include <iostream>
#include <cstring>
using namespace std;

class Pet
{
public:
	Pet(int num)
		: m_num(num)
	{
		cout << "宠物: " << this->getNum() << " 出生了" << endl;
	}

	~Pet()
	{
		cout << "宠物: " << this->getNum() << " 嗝屁了" << endl;
	}

	void eat()
	{
		cout << "宠物: " << this->m_num << " 在吃食物 " << endl;
	}

protected:
	int getNum()
	{
		return m_num;
	}

private:
	int m_num;
};


class Cat : public Pet
{
public:
	Cat(int num)
		: Pet(num)
	{
		cout << "猫: " << this->getNum() << " 出生了" << endl;
	}

	~Cat()
	{
		cout << "猫: " << getNum() << " 嗝屁了" << endl;
	}
};

int main(int argc, char* argv[])
{
	{ // 添加作用域，让 cat析构
		Cat cat(1);
		cat.eat();
	}
	return 0;
}


