#include <gtest/gtest.h>
#include "win_condition.h"
#include "statistic.h"

TEST(WinConditionTest, CorrectIncrementsGamesWon)
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