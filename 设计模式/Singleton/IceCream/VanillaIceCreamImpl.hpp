#ifndef VANILLAICECREAMIMPL_HPP
#define VANILLAICECREAMIMPL_HPP

#include <QDebug>
#include <QString>
#include "IceCreamInterface.h"

// ��ݱ����
class VanillaIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        qDebug() << QStringLiteral("��ݱ���ܵ�ζ����");
    }
};

#endif // VANILLAICECREAMIMPL_HPP
