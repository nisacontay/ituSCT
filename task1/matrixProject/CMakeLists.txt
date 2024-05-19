cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MatrixProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include)

# Add the executable
add_executable(MatrixProject main.cpp)
