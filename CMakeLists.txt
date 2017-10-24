cmake_minimum_required(VERSION 3.8)
project(inheritance)

set(CMAKE_CXX_STANDARD 11)


#set(SOURCE_FILES main.cpp Counter.cpp Counter.h)
#set(SOURCE_FILES testDistance.cpp distanceTest.cpp distanceTest.h)
set(SOURCE_FILES testEmployee.cpp Employee.cpp Employee.h Manager.cpp Manager.h Scientist.cpp Scientist.h Laborer.cpp Laborer.h)


add_executable(inheritance ${SOURCE_FILES})