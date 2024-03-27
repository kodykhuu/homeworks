
add_library(pixelate_image pixelate_image.cpp)
target_link_libraries(pixelate_image PUBLIC cxx_setup)

if (BUILD_TESTING)
    add_executable(tests pixelate_image_test.cpp pixelate_image.cpp)
    target_link_libraries(tests PRIVATE GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif ()
