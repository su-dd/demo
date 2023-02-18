#include <iostream>
#include <cstring>
using namespace std;

class Pet
{
public:
	Pet(int num)
		: m_num(num) {}

	virtual ~Pet() { }
	// 父类的 virtual 是必须的
	virtual void eat()
	{
		cout << "宠物: " << this->m_num << " 在吃食物 " << endl;
	}

protected:
	int m_num;
};


class Cat : public Pet
{
public:
	Cat(int num)
		: Pet(num) { }

	~Cat() { }
	// 子类的 virtual 和 override 关键字可以省略； 
	// virtual:	添加上增加可读性
	// override: 添加上可以帮助编译器做编译器检查
	virtual void eat() override
	{
		cout << "猫: " << this->m_num << " 在吃食物 " << endl;
	}
};

int main(int argc, char* argv[])
{
	// 这里使用 Cat 类 创建一个 Pet类型 的 变量 pCat
	Pet* pCat = new Cat(2);
	pCat->eat();
	delete pCat;

	return 0;
}


