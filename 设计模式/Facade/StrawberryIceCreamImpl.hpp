#ifndef STRAWBERRYICECREAMIMPL_HPP
#define STRAWBERRYICECREAMIMPL_HPP

#include <iostream>
#include "IceCreamInterface.h"

// ��ݮ�����
class StrawberryIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        std::cout << "��ݮ����ܵ�ζ����" << std::endl;
    }
};

#endif // STRAWBERRYICECREAMIMPL_HPP
