#ifndef STRAWBERRYFACTORY_H
#define STRAWBERRYFACTORY_H

#include "factorytemplate.h"
#include <QString>

class StrawberryFactory : public FactoryTemplate
{
public:
    virtual ~StrawberryFactory() {}
protected:
    virtual void createIceBall(IceCream &iceCream)
    {
        iceCream.setIceBall(QStringLiteral("草莓"));
    }
};
#endif // STRAWBERRYFACTORY_H
