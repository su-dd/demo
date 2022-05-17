#include "IceCreamInterface.h"
#include "StrawberryIceCreamImpl.hpp"
#include "VanillaIceCreamImpl.hpp"

int main(int argc, char *argv[])
{
    // Âò¸ö²ÝÝ®Î¶µÄ±ùä¿ÁÜ
    IceCreamInterface *pIceCreamPrototype1 = new StrawberryIceCreamImpl();
    // Âò¸öÏã²ÝÎ¶µÄ±ùä¿ÁÜ
    IceCreamInterface *pIceCreamPrototype2 = new VanillaIceCreamImpl();


    // ¿ËÂ¡
    IceCreamInterface *pClone = pIceCreamPrototype1->clone();
    pClone->taste();
    delete pClone;

    pClone = pIceCreamPrototype2->clone();
    pClone->taste();
    delete pClone;

    delete pIceCreamPrototype1;
    delete pIceCreamPrototype2;
    return 0;
}
