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

add_executable(
  test_win_condition
  test_win_condition.cc
  win_condition.cpp
  statistic.cpp
)

target_link_libraries(
  test_win_condition
  GTest::gtest_main
)

add_executable(
  test_is_valid_guess
  test_is_valid_guess.cc
  is_valid_guess.cpp
)

target_link_libraries(
  test_is_valid_guess
  GTest::gtest_main
)


include(GoogleTest)
gtest_discover_tests(test_random_number)
gtest_discover_tests(test_win_condition)
gtest_discover_tests(test_is_valid_guess)