cmake_minimum_required(VERSION 3.20)
project(knockout)

set(CMAKE_CXX_STANDARD 11)

add_executable(knockout main.cpp library.h library.cpp)
