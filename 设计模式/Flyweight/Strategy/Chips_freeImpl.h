#ifndef CHIPS_FREEIMPL_H
#define CHIPS_FREEIMPL_H
#include "SaleStrategyInterface.h"
#include <QString>
#include <QDebug>
class Chips_freeImpl : public SaleStrategyInterface
{
public:
    virtual void promotion() override
    {
        qDebug() << QStringLiteral("ÊíÌõÃâ·Ñ£¡");
    }
};
#endif // CHIPS_FREEIMPL_H
