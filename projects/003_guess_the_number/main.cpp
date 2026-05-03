#include <iostream>
#include "random_number.h"
#include "win_condition.h"
#include "statistic.h"
#include "is_valid_guess.h"

int main()
{
    bool play_again = true;

    Statistic statistic(0.00, 0, 0);

    // Run the game once
    do
    {
        // Start Game
        int lucky_number = randomNumber();

        // TODO Make result object
        int guessed_number;
        std::cout << "Guess a number from 1 to 5: ";
        // Validate number and range
        // TODO Put Validation Logic into function
        while (!(std::cin >> guessed_number) || !isValidGuess(guessed_number))
        {
            std::cout << "Invalid input. Guess a number from 1 to 5: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        std::cout << "\n";

        // Result
        std::cout << "=== Result ===\n";
        std::cout << "Your number is:  " << guessed_number << "\n";
        std::cout << "Lucky number is: " << lucky_number << "\n";
        // Pass object by reference to change value
        winCondition(lucky_number, guessed_number, statistic);

        // Show Statistic
        statistic.printStatistic();

        // Play again
        std::cout << "Play again? (y/n): ";
        std::cout << "\n";
        char input;
        std::cin >> input;
        play_again = (input == 'y');
        std::cout << "\n";
    } while (play_again);

    // TODO Simulate a player for 1.000.000 plays

    std::cout << "Game has ended! \n";

    return 0;
}