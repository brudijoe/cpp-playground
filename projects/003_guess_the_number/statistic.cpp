#include "statistic.h"

// Parameterized constructor with member initializer lists
Statistic::Statistic(int gamesWon, int gamesLost)
    : s_gamesWon(gamesWon), s_gamesLost(gamesLost)
{
}

// Setter/Getter GamesWon
void Statistic::setGamesWon(int gamesWon)
{
    s_gamesWon = gamesWon;
}

int Statistic::getGamesWon()
{
    return s_gamesWon;
}

// Setter/Getter GamesLost
void Statistic::setGamesLost(int gamesLost)
{
    s_gamesLost = gamesLost;
}

int Statistic::getGamesLost()
{
    return s_gamesLost;
}