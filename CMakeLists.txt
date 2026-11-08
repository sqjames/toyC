# Setup our project
cmake_minimum_required(VERSION 3.16)

# Setup core project
project(toyC LANGUAGES CXX)

# Change standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Project deps go here : use find_package


# Add compiler target
add_executable(toyC
    src/Main.cpp
)

# Setup compile time definitions here


# Setup include directory here


# Setup our dependencies here

