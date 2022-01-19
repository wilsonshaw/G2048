cmake_minimum_required(VERSION 3.22.0)
project(G2048
LANGUAGES CXX
)
set(CMAKE_BUILD_TYPE Debug
    CMAKE_CXX_COMPILER "/usr/bin/clang++-13"
    CMAKE_EXPORT_COMPILE_COMMANDS 1
)
add_executable(G2048
main.cpp
game.hpp
game.cpp
)
