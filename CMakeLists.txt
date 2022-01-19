cmake_minimum_required(VERSION 3.22.0)
project(G2048
LANGUAGES CXX
)
set(CMAKE_BUILD_TYPE Debug)
add_executable(G2048
main.cpp
game.hpp
game.cpp
)
