#include "IceCreamInterface.h"
#include "StrawberryIceCreamImpl.hpp"
#include "VanillaIceCreamImpl.hpp"

int main(int argc, char *argv[])
{
    // �����ݮζ�ı����
    IceCreamInterface *pIceCreamPrototype1 = new StrawberryIceCreamImpl();
    // ������ζ�ı����
    IceCreamInterface *pIceCreamPrototype2 = new VanillaIceCreamImpl();


    // ��¡
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
