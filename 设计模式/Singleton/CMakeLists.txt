# CMakeList.txt: test 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project(Singleton LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)


# 指定头文件的搜索路径
include_directories(".")
include_directories("Facade")
include_directories("Factory")
include_directories("IceCream")
include_directories("Singleton")

# 将源代码添加到此项目的可执行文件。
add_executable (
Singleton
"main.cpp"
"Facade/IceCreamFactoryFacade.hpp"
"Facade/IceCreamFactoryFacadeInterface.h"
"Factory/VanillaIceCreamFactory.hpp"
"Factory/IceCreamFactoryInterface.h"
"Factory/StrawberryIceCreamFactory.hpp"
"IceCream/VanillaIceCreamImpl.hpp"
"IceCream/IceCreamInterface.h"
"IceCream/StrawberryIceCreamImpl.hpp"
"Singleton/LazySingletonFactoryFacade.hpp"
"Singleton/EagerSingletonFactoryFacade.hpp"
)

target_link_libraries(Singleton Qt${QT_VERSION_MAJOR}::Core)

# TODO: 如有需要，请添加测试并安装目标。
