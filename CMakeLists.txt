cmake_minimum_required(VERSION 3.14)
project(DeskCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(DeskCalculator main.cpp catch.hpp Error.h TokenStream.h Calculate.h Parser.h Functions.h)