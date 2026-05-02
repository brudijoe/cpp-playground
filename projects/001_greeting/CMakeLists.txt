enable_testing()

add_executable(
  test_greeting
  test_greeting.cc
  greeting.cpp
)

target_link_libraries(
  test_greeting
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_greeting)