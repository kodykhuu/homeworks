

if (BUILD_TESTING)
    add_executable(tests string_split_test.cpp string_trim_test.cpp string_split.h string_split.cpp)
    target_link_libraries(tests PRIVATE GTest::gtest_main)
    target_link_libraries(tests PRIVATE GTest::gmock_main)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif ()