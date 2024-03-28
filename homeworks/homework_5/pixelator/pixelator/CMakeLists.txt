add_library(stb_image_data_view stb_image_data_view.cpp)
target_link_libraries(stb_image_data_view PUBLIC stb::stb)
target_link_libraries(stb_image_data_view PUBLIC cxx_setup)

add_library(image image.cpp)
target_link_libraries(image PUBLIC ftxui::screen)
target_link_libraries(image PUBLIC cxx_setup)

add_library(pixelate_image pixelate_image.cpp)
target_link_libraries(pixelate_image PUBLIC cxx_setup)

add_library(drawer drawer.cpp)
target_link_libraries(drawer PUBLIC ftxui::screen)
target_link_libraries(drawer PUBLIC cxx_setup)

#if (BUILD_TESTING)
#    add_executable(tests pixelate_image_test.cpp pixelate_image.cpp)
#    target_link_libraries(tests PRIVATE GTest::gtest_main)
#
#    include(GoogleTest)
#    gtest_discover_tests(tests)
#endif ()
