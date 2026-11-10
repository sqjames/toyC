# Setup our project
cmake_minimum_required(VERSION 3.16)

# Setup core project
project(toyLua LANGUAGES CXX)

# Change standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Project deps go here : use find_package
find_package(spdlog CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

# Add compiler target
add_executable(toyLua
    src/Main.cpp
)

# Setup compile time definitions here
target_link_libraries(toyLua
    PRIVATE
        spdlog::spdlog
        GTest::gtest
        GTest::gtest_main
        GTest::gmock
        GTest::gmock_main
)

# Setup include directory here
target_include_directories(toyLua
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Setup our dependencies here

