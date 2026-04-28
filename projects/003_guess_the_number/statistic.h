#pragma once

class Statistic
{
private:
    int s_gamesWon = 0;
    int s_gamesLost = 0;

public:
    // Parameterized constructor
    Statistic(int gamesWon, int gamesLost);

    // Setter/Getter
    void setGamesWon(int gamesWon);
    int getGamesWon();

    void setGamesLost(int gamesLost);
    int getGamesLost();
};