#pragma once

class Statistic
{
private:
    int s_games_won = 0;
    int s_games_lost = 0;

public:
    // Parameterized constructor
    Statistic(int games_won, int games_lost);

    // Setter/Getter
    void setGamesWon(int games_won);
    int getGamesWon();

    void setGamesLost(int games_lost);
    int getGamesLost();

    // Calculate winrate
    void calculateWinrate();
};