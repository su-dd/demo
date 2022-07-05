#ifndef IceCream_H
#define IceCreame_H
#include <iostream>
using std;
class IceCream
{
public:
	IceCream(string flavour, string dryFruit)
		: m_sflavour(flavour)
		, m_sDryFruit(dryFruit) {}

	void taste()
	{
		cout << m_sDryFruit + m_sflavour + "±ùä¿ÁÜ" << endl;
	}
private:
	string m_sflavour;
	string m_sDryFruit;
};

#endif // !IceCream_H
