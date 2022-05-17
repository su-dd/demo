#ifndef VANILLAFACTORY_H
#define VANILLAFACTORY_H

#include "factorytemplate.h"
#include <QString>
class VanillaFactory : public FactoryTemplate
{
public:
    virtual ~VanillaFactory() {}
protected:
    virtual void createIceBall(IceCream &iceCream)
    {
        iceCream.setIceBall(QStringLiteral("香草"));
    }
};

#endif // VANILLAFACTORY_H
