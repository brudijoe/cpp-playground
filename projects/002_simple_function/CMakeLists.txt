enable_testing()

add_executable(
  test_simplefunction
  test_simplefunction.cc
  square.cpp
)

target_link_libraries(
  test_simplefunction
  GTest::gtest_main
)

include(GoogleTest)
add_test(NAME SquareTests COMMAND test_simplefunction)