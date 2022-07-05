﻿#ifndef Originator_H
#define Originator_H
#include "IceCream.h"
#include "Memento.h"
using std;
class IceFactoryOriginator
{
public:
	IceFactoryOriginator()
		: m_sflavour("")
		, m_sDryFruit("") {}

	IceCream* createCream()
	{
		IceCream *pIceCream = new IceCream(m_sflavour, m_sDryFruit);
		return pIceCream;
	}

	Memento* createMemento()
	{
		return new Memento(m_sflavour, m_sDryFruit);
	}

	void restoreMemento(Memento* memento) 
	{
		m_sflavour = memento->getFlavour();
		m_sDryFruit = memento->getDryFruit();
	}
private:
	string m_sflavour;
	string m_sDryFruit;
};

#endif // !Originator_H
