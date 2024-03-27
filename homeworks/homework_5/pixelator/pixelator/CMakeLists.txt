
if (BUILD_TESTING)
    #add_executable()
    target_link_libraries(tests PRIVATE GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(tests)
endif ()
