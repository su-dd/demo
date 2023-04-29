cmake_minimum_required (VERSION 3.24)

project(extern用法)

#set(CMAKE_CXX_STANDARD 20)

include_directories(.)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

add_executable(demo120 ${DIR_SRCS})