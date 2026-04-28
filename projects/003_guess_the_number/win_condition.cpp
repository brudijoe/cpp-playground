#include "win_condition.h"
#include <iostream>
#include "statistic.h"

void winCondition(int lucky_number, int guessed_number, Statistic &statistic)
{
    if (lucky_number == guessed_number)
    {
        std::cout << "Congratulations, you've won!" << "\n\n";
        statistic.setGamesWon(statistic.getGamesWon() + 1);
        return;
    }
    std::cout << "Sorry, you've lost!" << "\n\n";
    statistic.setGamesLost(statistic.getGamesLost() + 1);
}