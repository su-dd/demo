#ifndef BrandImpl_H
#define BrandImpl_H

#include "BrandIntf.h"
#include <iostream>
#include <Windows.h>
using namespace std;

class ABrandImpl : public BrandIntf
{
public:
    void logo()
    {
        cout << "啃得鸡logo";
    }
};

class BBrandImpl : public BrandIntf
{
public:
    void logo()
    {
        cout << "啃得鸭logo";
    }
};

#endif