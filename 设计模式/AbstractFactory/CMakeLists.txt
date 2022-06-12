# CMakeList.txt: test 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project(AbstractFactory LANGUAGES CXX)

#set(CMAKE_INCLUDE_CURRENT_DIR ON)

#set(CMAKE_AUTOUIC ON)
#set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTORCC ON)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)


# 指定头文件的搜索路径
include_directories("factory")

include_directories("product")

# 将源代码添加到此项目的可执行文件。
add_executable (
AbstractFactory
"main.cpp"
"factoryproducer.h"
"factory/factoryinterface.h"
"factory/set1factoryimpl.h"
"factory/set2factoryimpl.h"
"product/BigChipsImpl.h"
"product/ChipsInterface.h"
"product/IceCreamInterface.h"
"product/LittleChipsImpl.h"
"product/StrawberryIceCreamImpl.hpp"
"product/VanillaIceCreamImpl.hpp"
)

#target_link_libraries(AbstractFactory Qt${QT_VERSION_MAJOR}::Core)

# TODO: 如有需要，请添加测试并安装目标。
