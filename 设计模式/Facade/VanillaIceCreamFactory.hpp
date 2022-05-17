#ifndef VANILLAICECREAMFACTORY_H
#define VANILLAICECREAMFACTORY_H
#include "IceCreamFactoryInterface.h"
#include "VanillaIceCreamImpl.hpp"
// œ„≤›±˘‰ø¡‹π§≥ß
class VanillaIceCreamFactory : public IceCreamFactoryInterface
{
public:
    VanillaIceCreamFactory() {}
    IceCreamInterface * createIceCream()
    {
        return new VanillaIceCreamImpl();
    }
};
#endif // VANILLAICECREAMFACTORY_H
