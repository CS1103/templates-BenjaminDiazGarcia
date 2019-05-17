cmake_minimum_required(VERSION 3.10)
project(QuickSort)

set(CMAKE_CXX_STANDARD 17)

add_executable(QuickSort main.cpp QuickSort2.h test.cpp catch.hpp)