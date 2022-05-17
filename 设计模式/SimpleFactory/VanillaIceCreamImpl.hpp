#ifndef VANILLAICECREAMIMPL_HPP
#define VANILLAICECREAMIMPL_HPP

#include <QDebug>
#include <QString>
#include "IceCreamInterface.h"

// 香草冰淇淋
class VanillaIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        qDebug() << QStringLiteral("香草冰淇淋的味道！");
    }
};

#endif // VANILLAICECREAMIMPL_HPP
