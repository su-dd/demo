#ifndef LITTLECHIPSIMPL_H
#define LITTLECHIPSIMPL_H

#include "ChipsInterface.h"
#include "qdebug.h"
#include <QString>

class LittleChipsImpl : public ChipsInterface
{
public:
    virtual void size()
    {
        qDebug() << QStringLiteral("���С�ݵ�������");
    }
};

#endif // LITTLECHIPSIMPL_H
