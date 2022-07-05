#ifndef CareTaker_H
#define CareTaker_H
#include "Memento.h"
#include <vector>
using namespace std;
class CareTaker
{
public:
	CareTaker() {}
	~CareTaker() 
	{
		;
		for (auto oIterator = m_oMementos.begin(); oIterator != m_oMementos.end(); ++oIterator)
		{
			delete oIterator._Ptr;
		}
	}

	void add(Memento* memento) { this->m_oMementos.push_back(memento); }
	Memento* get(int index) { this->m_oMementos[i]; }

private:
	vector<Memento*> m_oMementos;
};

#endif // !CareTaker_H
