#include "statistic.h"

// Parameterized constructor with member initializer lists
Statistic::Statistic(int games_won, int games_lost)
    : s_games_won(games_won), s_games_lost(games_lost)
{
}

// Setter/Getter GamesWon
void Statistic::setGamesWon(int games_won)
{
    s_games_won = games_won;
}

int Statistic::getGamesWon()
{
    return s_games_won;
}

// Setter/Getter GamesLost
void Statistic::setGamesLost(int games_lost)
{
    s_games_lost = games_lost;
}

int Statistic::getGamesLost()
{
    return s_games_lost;
}

// Calculate winrate
void calculateWinrate()
{
    double winrate = s_sum_of_games / s_games_won;
}