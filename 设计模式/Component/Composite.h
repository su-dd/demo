#ifndef Composite_H
#define Composite_H
#include <iostream>
#include <vector>
#include <string>
#include "Component.h"

using namespace std;

class Composite : public Component
{
public:
	Composite() 
		: Component(key)
		, m_nNeedNum(0)
		, m_nCurNum(0)
		, m_pChildren(new map<string, Component*>())
	{

	}

	virtual ~Composite()
	{
		for each (auto var in *m_pChildren)
		{
			delete var.second;
		}
		m_pChildren->clear();
		delete m_pChildren;
	}

public:
	void add(Component* component)
	{
		m_pChildren->push_back(component);
		m_nNeedNum = m_pChildren->size();
	}

	void remove(int index)
	{
		m_pChildren->erase(m_pChildren->begin + index);
		m_nNeedNum = m_pChildren->size();
	}

	Component* getChild(int index)
	{ 
		m_pChildren[index];
	}
public:
	int buy(int num)
	{
		cout << m_sKey << "进货" << num << "根雪糕！" << endl;
		for each (auto var in *m_pChildren)
		{
			var->buy(var->needNum()) ;
		}
	}

	int needNum()
	{
		return m_nNeedNum - m_nCurNum;
	}

private:
	int m_nNeedNum;
	int m_nCurNum;
	vector<Component*>* m_pChildren;
};
#endif // Composite_H