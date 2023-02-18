# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("C++相关")

add_subdirectory(101_HelloWorld)
add_subdirectory(102_基础类型)
add_subdirectory(103_指针)
add_subdirectory(104_数组)
add_subdirectory(105_常用语句)
add_subdirectory(106_函数)
add_subdirectory(107_结构体联合体)
add_subdirectory(108_类的基本使用)
add_subdirectory(109_接口)
add_subdirectory(110_枚举)