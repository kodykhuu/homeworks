
add_library(string_split string_split.cpp)
add_library(string_trim string_trim.cpp)

target_link_libraries(string_split PUBLIC cxx_setup)
target_link_libraries(string_trim PUBLIC cxx_setup)

if (BUILD_TESTING)
    add_executable(tests string_split_test.cpp string_trim_test.cpp string_split.cpp string_trim.cpp)
    target_link_libraries(tests PRIVATE GTest::gtest_main)
    target_link_libraries(tests PRIVATE GTest::gmock_main)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif ()