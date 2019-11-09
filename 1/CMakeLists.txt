cmake_minimum_required(VERSION 3.15)
project(untitled5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_FLAGS "clang++ -std=c++11 -Wall -Werrr -pedantic")

add_executable(untitled5 main.cpp task1.h task1.cpp)