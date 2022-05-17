#ifndef ICECREAM_HALFFAREIMPL_H
#define ICECREAM_HALFFAREIMPL_H
#include "SaleStrategyInterface.h"
#include <QString>
#include <QDebug>
class IceCream_halfFareImpl : public SaleStrategyInterface
{
public:
    virtual void promotion() override
    {
        qDebug() << QStringLiteral("冰淇淋半价！");
    }
};
#endif // ICECREAM_HALFFAREIMPL_H
