#ifndef IceCreamInterface_H
#define IceCreamInterface_H

// ����ܽӿ�
class IceCreamInterface
{
public:
    virtual ~IceCreamInterface() {}
    virtual void taste() = 0;
    virtual IceCreamInterface *clone() = 0;
};

#endif // IceCreamInterface_H
