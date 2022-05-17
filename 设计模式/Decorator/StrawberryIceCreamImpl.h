#ifndef StrawberryIceCreamImpl_HPP
#define StrawberryIceCreamImpl_HPP
#include "IceCreamInterface.h"
#include <iostream>
using namespace std;

class StrawberryIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        cout << "草莓味冰淇淋" << endl;
    }
};

#endif