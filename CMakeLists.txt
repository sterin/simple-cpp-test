cmake_minimum_required(VERSION 3.10)

project(xxx)

find_package(libpng CONFIG REQUIRED)

add_library(xxx xxx.cpp)
target_link_libraries(xxx PRIVATE png_static)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC xxx)
