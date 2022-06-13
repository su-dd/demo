#ifndef ICECREAM_H
#define ICECREAM_H

#include <iostream>
#include <string>

class IceCream
{
public:
    void taste()
    {
        std::cout << QStringLiteral("%1IceCream").arg(m_sflavour);
    }

protected:
    void setCone()
    {
        return;
    }

    void setIceBall(const string & str)
    {
        m_sflavour = str;
    }

private:
    QString m_sflavour;

    friend class FactoryTemplate;
    friend class StrawberryFactory;
    friend class VanillaFactory;
};
#endif // ICECREAM_H
