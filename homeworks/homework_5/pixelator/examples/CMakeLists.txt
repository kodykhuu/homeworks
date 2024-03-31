set(CMAKE_CXX_STANDARD 17)
add_executable(pixelate pixelate.cpp)
target_link_libraries(pixelate PRIVATE drawer pixelate_image stb_image_data_view cxx_setup)