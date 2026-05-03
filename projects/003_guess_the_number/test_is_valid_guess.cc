#include "gtest/gtest.h"
#include "is_valid_guess.h"

TEST(IsValidGuessTest, ValidInputs)
{
    // Assert
    EXPECT_TRUE(isValidGuess(1));
    EXPECT_TRUE(isValidGuess(5));
}

TEST(IsValidGuessTest, InvalidInputs)
{
    // Assert
    EXPECT_FALSE(isValidGuess(0));
    EXPECT_FALSE(isValidGuess(6));
}