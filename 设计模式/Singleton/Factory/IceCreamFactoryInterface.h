#ifndef ICECREAMFACTORYINTERFACE_H
#define ICECREAMFACTORYINTERFACE_H
#include "IceCreamInterface.h"
// ����ܹ����ӿ�
class IceCreamFactoryInterface
{
public:
    virtual ~IceCreamFactoryInterface() {}
    virtual IceCreamInterface * createIceCream() = 0;
};
#endif // ICECREAMFACTORYINTERFACE_H
