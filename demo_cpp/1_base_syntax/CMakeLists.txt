# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.24)

## 中文乱码
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fexec-charset=GBK")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")

project ("C++相关")

add_subdirectory(101_hello)
add_subdirectory(102_type)
add_subdirectory(103_pointer)
add_subdirectory(104_array)
add_subdirectory(105_control_state)
add_subdirectory(106_function)
add_subdirectory(107_struct_union)
add_subdirectory(108_class)
add_subdirectory(109_interface)
add_subdirectory(110_enum)
add_subdirectory(120_extern)