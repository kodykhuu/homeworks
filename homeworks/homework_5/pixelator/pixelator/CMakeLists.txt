add_library(stb_image_data_view stb_image_data_view.cpp)
target_link_libraries(stb_image_data_view PUBLIC ftxui::screen stb::stb cxx_setup)

add_library(image image.cpp)
target_link_libraries(image PUBLIC ftxui::screen stb::stb cxx_setup)

add_library(pixelate_image pixelate_image.cpp)
target_link_libraries(pixelate_image PUBLIC ftxui::screen stb::stb cxx_setup)

add_library(drawer drawer.cpp)
target_link_libraries(drawer PUBLIC ftxui::screen stb::stb cxx_setup)

if (BUILD_TESTING)
    add_executable(tests pixelate_image_test.cpp drawer_test.cpp image_test.cpp stb_image_data_view_test.cpp pixelate_image.cpp drawer.cpp image.cpp stb_image_data_view.cpp)
    target_link_libraries(tests PRIVATE ftxui::screen stb::stb)
    target_link_libraries(tests PRIVATE GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif ()
