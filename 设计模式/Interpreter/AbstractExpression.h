#ifndef AbstractExpression_H
#define AbstractExpression_H
#include "Context.h"
#include <string>

using namespace std;

class AbstractExpression
{
public:
	virtual ~AbstractExpression() {}
	virtual string interprete(Context &ctx) = 0;
};

class NonTerminalExpression : public AbstractExpression
{
};

class TerminalExpression : public AbstractExpression
{
};
#endif // AbstractExpression_H