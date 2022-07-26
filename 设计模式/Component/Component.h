#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Component
{
public:
	explicit Component(string key) 
		: m_sKey(key)
	{
	}
	virtual ~Component() {}
public:
	void add(string key, Component* component) {}
	void remove(string key) {}
	Component* getParent() { return nullptr; }
	Component* getChild(string key) { return nullptr; }
public:
	int buy(int num) {}
	int needNum() { return 0;  }

private:
	string m_sKey;
};

#endif // COMPONENT_H