#include <gtest/gtest.h>
#include "greeting.h"

TEST(GreetingTest, Greeting) {
    EXPECT_EQ(greeting("Alice"), "Hello Alice");
}