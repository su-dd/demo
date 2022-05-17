#include <iostream>
#include <Windows.h>
#include "BrandImpl.hpp"
#include "IceCreamImpl.hpp"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    StrawberryIceCreamImpl oIceCream1;
    oIceCream1.setBrand(new ABrandImpl());
    oIceCream1.taste();

    StrawberryIceCreamImpl oIceCream2;
    oIceCream2.setBrand(new BBrandImpl());
    oIceCream2.taste();

    return 0;
}
