cmake_minimum_required(VERSION 3.13)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)
#设置包含目录
#include_directories(
#        cpp
#)
# aux_source_directory(cpp/. SRC_LIST) # 搜索当前目录下的所有.cpp文件
# 设置变量值
# set(SRC_LIST main.cc)

# add_executable(LeetCode ${SRC_LIST})
add_executable(Diagonal_Traverse cpp//Diagonal_Traverse.cpp)
