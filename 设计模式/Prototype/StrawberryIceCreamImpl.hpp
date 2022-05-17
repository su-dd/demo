#ifndef STRAWBERRYICECREAMIMPL_HPP
#define STRAWBERRYICECREAMIMPL_HPP

#include <QDebug>
#include <QString>
#include "IceCreamInterface.h"

// ��ݮ�����
class StrawberryIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        qDebug() << QStringLiteral("��ݮ����ܵ�ζ����");
    }

    IceCreamInterface *clone()
    {
        return new StrawberryIceCreamImpl();
    }
};

#endif // STRAWBERRYICECREAMIMPL_HPP
