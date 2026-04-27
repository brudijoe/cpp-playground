#include "win_condition.h"
#include <iostream>

void winCondition(int lucky_number, int guessed_number)
{
    if (lucky_number == guessed_number)
    {
        std::cout << "Congratulations, you've won!" << "\n\n";
        return;
    }
    std::cout << "Sorry, you've lost!" << "\n\n";
}