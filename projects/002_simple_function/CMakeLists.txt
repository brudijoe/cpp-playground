enable_testing()

add_executable(
  test_square
  test_square.cc
  square.cpp
)

target_link_libraries(
  test_square
  GTest::gtest_main
)

include(GoogleTest)
add_test(NAME SquareTests COMMAND test_square)