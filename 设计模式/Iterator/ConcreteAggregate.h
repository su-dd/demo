#include "Aggregate.h"

class ConcreteAggregate : public Aggregate
{
public:
	ConcreteAggregate()
	{}

	virtual ~ConcreteAggregate() {}

	virtual Iterator createIterator() override
	{

	}
};