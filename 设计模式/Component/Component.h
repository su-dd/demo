#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Component
{
public:
	explicit Component(string key) : m_sKey(key) {}
	virtual ~Component() {}
public:
	void add(Component* component) {}
	void remove(Component* component) {}
	Component* getParent() { return nullptr; }
	Component* getChild(int) { return nullptr; }
	list<Component*>* getChildren() { return nullptr; }
public:
	void sell() {}
	void buy() {}

private:
	string m_sKey;
};

#endif // COMPONENT_H