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
    const size_t expected_size = 5;
    std::set<int> randomNumbers;

    for (int i = 0; i < 1000; ++i)
    {
        randomNumbers.insert(randomNumber());

        // Exit early once all 5 values have been found
        if (randomNumbers.size() == expected_size)
        {
            std::cout << "All 5 numbers found after " << i + 1 << " iterations";
            SUCCEED();
            return;
        }
    }

    // If not all values are present after 1000 attempts → fail
    for (int expected = 1; expected <= 5; ++expected)
    {
        EXPECT_TRUE(randomNumbers.count(expected))
            << "Number " << expected << " was never generated";
    }
}