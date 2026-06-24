cmake_minimum_required(VERSION 3.2.8 FATAL_ERROR)
project("Calculator")

set(CMAKE_CXX_STANDARD   20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS        OFF)

find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)

add_library(main STATIC
	       src/Main.cpp)

target_include_directories(main PUBLIC src)
target_link_libraries(main PRIVATE SDL2::SDL2)

add_executable(${PROJECT_NAME} private src)
target_include_directories($(PROJECT_NAME) PRIVATE src )
target_link_libraries(${PROJECT_NAME} PRIVATE
                      SDL2::SDL2
                       main)
