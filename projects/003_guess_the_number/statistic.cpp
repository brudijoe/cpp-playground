#include "statistic.h"
#include <iostream>
#include <iostream>
#include <iomanip>

// Parameterized constructor with member initializer lists
Statistic::Statistic(int sum_of_games, int games_won, int games_lost)
    : s_sum_of_games(sum_of_games), s_games_won(games_won), s_games_lost(games_lost)
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

void Statistic::setSumOfGames(int sum_of_games)
{
    s_sum_of_games = sum_of_games;
}

int Statistic::getSumOfGames()
{
    return s_sum_of_games;
}

// Calculate winrate
void Statistic::calculateWinrate()
{
    // Cast to double to prevent integer division
    double winrate = (static_cast<double>(s_games_won) / s_sum_of_games) * 100;
    std::cout << "Your winrate is: " << std::fixed << std::setprecision(2) << winrate << " %.\n";
}