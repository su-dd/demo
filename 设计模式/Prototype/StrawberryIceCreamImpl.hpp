#ifndef STRAWBERRYICECREAMIMPL_HPP
#define STRAWBERRYICECREAMIMPL_HPP

#include <QDebug>
#include <QString>
#include "IceCreamInterface.h"

// 草莓冰淇淋
class StrawberryIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        qDebug() << QStringLiteral("草莓冰淇淋的味道！");
    }

    IceCreamInterface *clone()
    {
        return new StrawberryIceCreamImpl();
    }
};

#endif // STRAWBERRYICECREAMIMPL_HPP
