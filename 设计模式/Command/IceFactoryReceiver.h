#ifndef Originator_H
#define Originator_H
/****************************************************************
* 
* 接收者 （Receiv­er） 类包含部分业务逻辑。 几乎任何对象都可以作为接收者。 
* 
* 绝大部分命令只处理如何将请求传递到接收者的细节， 接收者自己会完成实际的工作。
* 
****************************************************************/

#include "IceCream.h"
#include "Memento.h"
using namespace std;
class IceFactoryReceiver
{
public:
	IceFactoryReceiver()
		: m_sflavour("")
		, m_sDryFruit("") {}

	void setFlavour(string flavour)
	{
		this->m_sflavour = flavour; 
	}

	void setDryFruit(string dryFruit) 
	{
		this->m_sDryFruit = dryFruit; 
	}

	IceCream* createCream()
	{
		IceCream *pIceCream = new IceCream(m_sflavour, m_sDryFruit);
		return pIceCream;
	}

	Memento* createMemento()
	{
		return new Memento(m_sflavour, m_sDryFruit);
	}

	void restoreMemento(Memento* memento) 
	{
		m_sflavour = memento->getFlavour();
		m_sDryFruit = memento->getDryFruit();
	}
private:
	string m_sflavour;
	string m_sDryFruit;
};

#endif // !Originator_H
