#ifndef LEAF_H
#define LEAF_H
#include "Component.h"
class Leaf : public Component
{
public:
	explicit Leaf(string key) : Component(key) {}
public:
	void buy()
	{

	}
};


#endif // LEAF_H