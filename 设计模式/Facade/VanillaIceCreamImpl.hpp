#ifndef VANILLAICECREAMIMPL_HPP
#define VANILLAICECREAMIMPL_HPP

#include <iostream>
#include "IceCreamInterface.h"

// œ„≤›±˘‰ø¡‹
class VanillaIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        std::cout << "œ„≤›±˘‰ø¡‹µƒŒ∂µ¿£°" << std::endl;
    }
};

#endif // VANILLAICECREAMIMPL_HPP
