cmake_minimum_required(VERSION 3.3)
project(T7_Computer_Architecture_Lab1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Decoder.cpp Decoder.h)
add_executable(T7_Computer_Architecture_Lab1 ${SOURCE_FILES})