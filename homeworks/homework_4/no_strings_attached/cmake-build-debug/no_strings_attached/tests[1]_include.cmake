if(EXISTS "/home/kkhuu/repos/homeworks/homeworks/homework_4/no_strings_attached/cmake-build-debug/no_strings_attached/tests[1]_tests.cmake")
  include("/home/kkhuu/repos/homeworks/homeworks/homework_4/no_strings_attached/cmake-build-debug/no_strings_attached/tests[1]_tests.cmake")
else()
  add_test(tests_NOT_BUILT tests_NOT_BUILT)
endif()
