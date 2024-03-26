cmake_minimum_required(VERSION 3.22)
project(no_strings_attached)
set(CMAKE_CXX_STANDARD 17)

include(CTest)
add_subdirectory(examples)
add_subdirectory(external)
add_subdirectory(no_strings_attached)
