if(EXISTS "/workspace/cpp-practice/my_project/build/hello_test[1]_tests.cmake")
  include("/workspace/cpp-practice/my_project/build/hello_test[1]_tests.cmake")
else()
  add_test(hello_test_NOT_BUILT hello_test_NOT_BUILT)
endif()
