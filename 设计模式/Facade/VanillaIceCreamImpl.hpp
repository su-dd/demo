#ifndef VANILLAICECREAMIMPL_HPP
#define VANILLAICECREAMIMPL_HPP

#include <iostream>
#include "IceCreamInterface.h"

// ��ݱ����
class VanillaIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        std::cout << "��ݱ���ܵ�ζ����" << std::endl;
    }
};

#endif // VANILLAICECREAMIMPL_HPP
