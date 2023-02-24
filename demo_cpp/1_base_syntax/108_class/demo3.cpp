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

	void eat(int weight)
	{
		cout << "(int)猫: " << this->m_num << " 吃了 " << weight << " kg 鱼 " << endl;
	}

	void eat(double weight)
	{
		cout << "(double)猫: " << this->m_num << " 吃了 " << weight << " kg 鱼 " << endl;
	}

public:
	int m_num;
};

int main(int argc, char* argv[])
{
	Cat* pCat = new Cat(2);
	pCat->eat(1);
	pCat->eat(1.3);
	delete pCat;

	return 0;
}


