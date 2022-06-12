#ifndef STRAWBERRYICECREAMIMPL_HPP
#define STRAWBERRYICECREAMIMPL_HPP

#include <iostream>
#include "IceCreamInterface.h"

// ²ÝÝ®±ùä¿ÁÜ
class StrawberryIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        std::cout << "²ÝÝ®±ùä¿ÁÜµÄÎ¶µÀ£¡" << std::endl;
    }
};

#endif // STRAWBERRYICECREAMIMPL_HPP
