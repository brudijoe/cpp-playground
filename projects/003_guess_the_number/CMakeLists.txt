enable_testing()

add_executable(
  test_random_number
  test_random_number.cc
  random_number.cpp
)

target_link_libraries(
  test_random_number
  GTest::gtest_main
)

include(GoogleTest)
add_test(NAME RandomNumberTests COMMAND test_random_number)