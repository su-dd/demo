#include "Aggregate.h"

class Iterator
{
public:
	virtual ~Iterator() {}

	virtual void next() = 0;

	virtual bool hasNext() = 0;
};