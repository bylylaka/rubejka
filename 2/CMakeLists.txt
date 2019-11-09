cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_FLAGS "clang++ -std=c++11 -Wall -Werrr -pedantic")

add_executable(task task2.cpp main.cpp task2.h)