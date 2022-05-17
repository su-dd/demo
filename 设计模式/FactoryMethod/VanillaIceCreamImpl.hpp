#ifndef VANILLAICECREAMIMPL_HPP
#define VANILLAICECREAMIMPL_HPP

#include <QDebug>
#include <QString>
#include "IceCreamInterface.h"

// œ„≤›±˘‰ø¡‹
class VanillaIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        qDebug() << QStringLiteral("œ„≤›±˘‰ø¡‹µƒŒ∂µ¿£°");
    }
};

#endif // VANILLAICECREAMIMPL_HPP
