#include <iostream>
#include <cstring>
using namespace std;

class Pet
{
public:
	Pet(int num)
		: m_num(num) {}

	~Pet() { }

public:
	int m_num;
};


class Cat : public Pet
{
public:
	Cat(int num)
		: Pet(num) 
		, m_num(100)
	{ }

	~Cat() { }

public:
	int m_num;
};

int main(int argc, char* argv[])
{
	Cat* pCat = new Cat(2);
	cout << pCat->m_num << endl;
	delete pCat;

	Pet* pPet = new Cat(2);
	cout << pPet->m_num << endl;
	delete pPet;

	return 0;
}


