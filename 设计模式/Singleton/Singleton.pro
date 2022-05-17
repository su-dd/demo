QT -= gui
TARGET = Singleton
TEMPLATE = app
CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS


QMAKE_CFLAGS += -fexec-charset=UTF-8 -finput-charset=GBK
QMAKE_CXXFLAGS += -fexec-charset=UTF-8 -finput-charset=GBK
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += \
    IceCream \
    Factory \
    Facade \
    Singleton

SOURCES += main.cpp

HEADERS += \
# 冰淇淋
    IceCream/IceCreamInterface.h \
    IceCream/StrawberryIceCreamImpl.hpp \
    IceCream/VanillaIceCreamImpl.hpp \
# 冰淇淋工厂
    Factory/IceCreamFactoryInterface.h \
    Factory/StrawberryIceCreamFactory.hpp \
    Factory/VanillaIceCreamFactory.hpp \
# 外观
    Facade/IceCreamFactoryFacadeInterface.h \
    Facade/IceCreamFactoryFacade.hpp \
# 懒汉单例
    Singleton/EagerSingletonFactoryFacade.hpp \
    Singleton/LazySingletonFactoryFacade.hpp

