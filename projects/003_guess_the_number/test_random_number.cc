#include <gtest/gtest.h>
#include "random_number.h"

TEST(RandomNumberTest, IsInRange)
{
    for (int i = 0; i < 1000; ++i)
    {
        int result = randomNumber();
        EXPECT_GE(result, 1) << "Number was lesser than 1: " << result;
        EXPECT_LE(result, 5) << "Number was greater than 5: " << result;
    }
}

TEST(RandomNumberTest, AllSetNumbersAreReached)
{
    // Sets: Are unique, meaning equal or duplicate values are ignored
    // How to optimize this test? Increase from 100 to 1000 to 10000 -> fail test?
    std::set<int> randomNumbers;
    for (int i = 0; i < 1000; ++i)
    {
        randomNumbers.insert(randomNumber());
    }
    for (int expected = 1; expected <= 5; ++expected)
    {
        EXPECT_TRUE(randomNumbers.count(expected))
            << "Number " << expected << " was never generated";
    }
}