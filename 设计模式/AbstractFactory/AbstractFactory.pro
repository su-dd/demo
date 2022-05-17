QT -= gui
TARGET = AbstractFactory
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

INCLUDEPATH += product\
               factory

SOURCES += main.cpp

HEADERS += \
# 产品
    product/IceCreamInterface.h \
    product/VanillaIceCreamImpl.hpp \
    product/StrawberryIceCreamImpl.hpp \
    product/ChipsInterface.h \
    product/BigChipsImpl.h \
    product/LittleChipsImpl.h \
# 工厂
    factory/factoryinterface.h \
    factory/set1factoryimpl.h \
    factory/set2factoryimpl.h \
    factoryproducer.h
