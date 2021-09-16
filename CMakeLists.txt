cmake_minimum_required(VERSION 3.20)
project(oop)

set(CMAKE_CXX_STANDARD 14)

include_directories(characters/headers
        headers)

add_executable(oop
        characters/headers/characters.h
        characters/characters.cpp
        headers/menu.hpp
        main.cpp)
