cmake_minimum_required(VERSION 3.27)
project(MT2Chihiro)

set(CMAKE_CXX_STANDARD 17)

add_executable(MT2Chihiro main.cpp
        populate_graphics_modes.cpp
        main_switch_block.cpp)
