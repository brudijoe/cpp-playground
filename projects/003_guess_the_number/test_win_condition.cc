#include <gtest/gtest.h>
#include "win_condition.h"
#include "statistic.h"

TEST(WinConditionTest, CorrectIncrementsGameWon)
{
    // Arrange
    Statistic statistic(0.00, 0, 0);

    // Act
    winCondition(3, 3, statistic);

    // Assert
    EXPECT_EQ(statistic.getGamesWon(), 1);
    EXPECT_EQ(statistic.getGamesLost(), 0);
    EXPECT_EQ(statistic.getSumOfGames(), 1);
}

TEST(WinConditionTest, CorrectIncrementsGameLost)
{
    // Arrange
    Statistic statistic(0.00, 0, 0);

    // Act
    winCondition(3, 5, statistic);

    // Assert
    EXPECT_EQ(statistic.getGamesWon(), 0);
    EXPECT_EQ(statistic.getGamesLost(), 1);
    EXPECT_EQ(statistic.getSumOfGames(), 1);
}