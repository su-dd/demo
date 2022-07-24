#ifndef Composite_H
#define Composite_H
#include <iostream>
#include <list>
#include <string>
#include "Component.h"

using namespace std;

class Composite : public Component
{
public:
	Composite() {}
	virtual ~Composite() {}
public:
	void add(Component* component) 
	{
	}
	void remove(Component* component) {}
	Component* getChild(int) { return nullptr; }
	list<Component*>* getChildren() { return m_pChildren; }
public:
	void sell() = 0;
	void buy() = 0;

private:
	String m_sKey;
	int m_nMaxNum;
	int m_nCurNum;
	Component* m_pParent;
	list<Component*>* m_pChildren;
};
#endif // Composite_H