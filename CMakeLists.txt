cmake_minimum_required(VERSION 3.8)
project(inheritance)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Counter.cpp Counter.h)
add_executable(inheritance ${SOURCE_FILES})