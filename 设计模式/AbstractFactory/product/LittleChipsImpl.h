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
        qDebug() << QStringLiteral("这个小份的薯条！");
    }
};

#endif // LITTLECHIPSIMPL_H
