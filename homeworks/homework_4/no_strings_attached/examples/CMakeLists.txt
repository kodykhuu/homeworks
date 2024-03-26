set(CMAKE_CXX_STANDARD 17)
add_executable(split_strings split_strings.cpp)
#add_executable(trim_strings t.cpp)
target_link_libraries(split_strings PRIVATE tools cxx_setup)