#pragma once
#include <ostream>

class Statistic
{
private:
    int s_sum_of_games = 0;
    int s_games_won = 0;
    int s_games_lost = 0;

public:
    // Parameterized constructor
    Statistic(int sum_of_games, int games_won, int games_lost);

    // Setter/Getter
    void setGamesWon(int games_won);
    int getGamesWon() const;

    void setGamesLost(int games_lost);
    int getGamesLost() const;

    void setSumOfGames(int sum_of_games);
    int getSumOfGames() const;

    // Calculate winrate
    double calculateWinrate() const;

    friend std::ostream &operator<<(std::ostream &out, const Statistic &statistic);
};