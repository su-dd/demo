#ifndef STRAWBERRYICECREAMIMPL_HPP
#define STRAWBERRYICECREAMIMPL_HPP

#include <QDebug>
#include <QString>
#include "IceCreamInterface.h"

// ²ÝÝ®±ùä¿ÁÜ
class StrawberryIceCreamImpl : public IceCreamInterface
{
public:
    virtual void taste() override
    {
        qDebug() << QStringLiteral("²ÝÝ®±ùä¿ÁÜµÄÎ¶µÀ£¡");
    }
};

#endif // STRAWBERRYICECREAMIMPL_HPP
