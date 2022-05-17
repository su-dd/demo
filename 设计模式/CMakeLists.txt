# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("DesignPattern")

# 包含子项目。

# 模板方法
add_subdirectory ("Template")

# 装饰器模式
add_subdirectory ("Decorator")

# 代理模式
add_subdirectory ("Proxy")

# 桥模式
add_subdirectory ("Bridge")
