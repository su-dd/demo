#ifndef STRAWBERRYICECREAMFACTORY_H
#define STRAWBERRYICECREAMFACTORY_H
#include "IceCreamFactoryInterface.h"
#include "StrawberryIceCreamImpl.hpp"
// ��ݮ����ܹ���
class StrawberryIceCreamFactory : public IceCreamFactoryInterface
{
public:
    StrawberryIceCreamFactory() {}
    IceCreamInterface * createIceCream()
    {
        return new StrawberryIceCreamImpl();
    }
};
#endif // STRAWBERRYICECREAMFACTORY_H
