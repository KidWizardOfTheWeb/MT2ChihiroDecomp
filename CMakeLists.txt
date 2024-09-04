cmake_minimum_required(VERSION 3.27)
project(MT2Chihiro)

set(CMAKE_CXX_STANDARD 17)

add_executable(MT2Chihiro main.cpp
        populate_graphics_modes.cpp
        main_switch_block.cpp
        _switch_call_dbg_menu_on_12h.cpp
        _set_up_hw_and_proj_title.cpp
        _set_up_renderware_info.cpp)
