#ifndef BIGCHIPSIMPL_H
#define BIGCHIPSIMPL_H

#include "ChipsInterface.h"
#include "qdebug.h"
#include <QString>

class BigChipsImpl : public ChipsInterface
{
public:
    virtual void size()
    {
        qDebug() << QStringLiteral("�����ݵ�������");
    }
};

#endif // BIGCHIPSIMPL_H
