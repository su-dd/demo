#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Component
{
public:
	explicit Component(string key) : m_sKey(key) {}
	virtual ~Component() {}
public:
	void add(string key, Component* component) {}
	void remove(string key) {}
	Component* getParent() { return nullptr; }
	Component* getChild(string key) { return nullptr; }
	map<string, Component*>* getChildren() { return nullptr; }
public:
	void sell() {}
	void buy() {}

private:
	string m_sKey;
};

#endif // COMPONENT_H