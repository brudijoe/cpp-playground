#include <gtest/gtest.h>
#include "square.h"

TEST(SquareTest, PositiveNumber)
{
    EXPECT_EQ(square(4), 16);
}

TEST(SquareTest, NegativeNumber)
{
    EXPECT_EQ(square(-3), 9);
}

TEST(SquareTest, Zero)
{
    EXPECT_EQ(square(0), 0);
}