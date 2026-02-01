cmake_minimum_required(VERSION 3.16)

project(cpu_software_rasterizer C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Put executable in project root
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

find_package(SDL2 REQUIRED)

file(GLOB SRC_FILES src/*.c)

add_executable(rasterizer ${SRC_FILES})

target_link_libraries(rasterizer SDL2::SDL2 m)
