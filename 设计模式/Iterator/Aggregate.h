#include "Iterator.h"

class Aggregate
{
public:
	virtual ~Aggregate()
	{

	}

	virtual Iterator createIterator() = 0;
};