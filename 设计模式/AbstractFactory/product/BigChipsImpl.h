#ifndef BIGCHIPSIMPL_H
#define BIGCHIPSIMPL_H

#include "ChipsInterface.h"
#include <iostream>

class BigChipsImpl : public ChipsInterface
{
public:
    virtual void size()
    {
        std::cout << "这个大份的薯条！";
    }
};

#endif // BIGCHIPSIMPL_H
