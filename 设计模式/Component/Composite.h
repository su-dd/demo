#ifndef Composite_H
#define Composite_H
#include <iostream>
#include <map>
#include <string>
#include "Component.h"

using namespace std;

class Composite : public Component
{
public:
	Composite(string key, int MaxNum) 
		: Component(key)
		, m_nMaxNum(MaxNum)
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
	void add(string key, Component* component) 
	{
		m_pChildren->insert(pair<string, Component*>(key, component));
	}

	void remove(string key)
	{
		delete (*m_pChildren)[key];
		m_pChildren->erase(key);
	}

	Component* getChild(string key) 
	{ 
		return m_pChildren->find(key)->second;
	}

	map<string, Component*>* getChildren()
	{
		return m_pChildren; 
	}
public:
	void sell()
	{

	}

	void buy()
	{

	}

private:
	int m_nMaxNum;
	int m_nCurNum;
	map<string, Component*>* m_pChildren;
};
#endif // Composite_H