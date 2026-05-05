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

int Statistic::getGamesWon() const
{
    return s_games_won;
}

// Setter/Getter GamesLost
void Statistic::setGamesLost(int games_lost)
{
    s_games_lost = games_lost;
}

int Statistic::getGamesLost() const
{
    return s_games_lost;
}

void Statistic::setSumOfGames(int sum_of_games)
{
    s_sum_of_games = sum_of_games;
}

int Statistic::getSumOfGames() const
{
    return s_sum_of_games;
}

// Calculate winrate
double Statistic::calculateWinrate()
{
    return (static_cast<double>(s_games_won) / s_sum_of_games) * 100;
}

void Statistic::printStatistic()
{
    std::cout << "=== Statistic ===\n";
    std::cout << "Games played: " << s_sum_of_games << "\n";
    std::cout << "Games won:    " << s_games_won << "\n";
    std::cout << "Games lost:   " << s_games_lost << "\n";
    std::cout << "Winrate:      " << std::fixed << std::setprecision(2) << calculateWinrate() << " %\n";
    std::cout << "\n";
}