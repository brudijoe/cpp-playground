#include <iostream>
#include "random_number.h"
#include "win_condition.h"

int main()
{
    // Start Game
    int lucky_number = randomNumber();

    int guessed_number;
    std::cout << "Guess a number from 1 to 5: ";
    std::cin >> guessed_number;

    winCondition(lucky_number, guessed_number);

    // Result
    std::cout << "Your number is: " << guessed_number << "\n";
    std::cout << "Lucky Number is: " << lucky_number << "\n";

    return 0;
}