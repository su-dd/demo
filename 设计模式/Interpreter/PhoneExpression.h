#ifndef PhoneExpressiosn_H
#define PhoneExpressiosn_H
#include "AbstractExpression.h"

class PhoneExpressiosn : public NonTerminalExpression
{
public:
	PhoneExpressiosn(AbstractExpression* expr)
	: m_Expr(expr) {}
	virtual ~PhoneExpressiosn()
	{
		delete m_Expr;
	}

	virtual string interpret(Context &ctx)
	{
		return "联系方式：" + m_Expr->interprete(ctx);
	}
private:
	AbstractExpression* m_Expr;
};
#endif // PhoneExpressiosn_H