if(EXISTS "/workspace/cpp-practice/chatgpttest/build/MyTests[1]_tests.cmake")
  include("/workspace/cpp-practice/chatgpttest/build/MyTests[1]_tests.cmake")
else()
  add_test(MyTests_NOT_BUILT MyTests_NOT_BUILT)
endif()
