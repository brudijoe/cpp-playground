#include <iostream>
#include "random_number.h"
#include "win_condition.h"
#include "statistic.h"

int main()
{
    bool playAgain = true;

    // TODO: Statistics Object
    int gamesWon = 0;
    int gamesLost = 0;
    Statistic statistic(0, 0);

    // Run the game once
    do
    {
        // Start Game
        int lucky_number = randomNumber();

        int guessed_number;
        std::cout << "Guess a number from 1 to 5: ";
        std::cin >> guessed_number;
        std::cout << "\n";

        // Result
        std::cout << "Result\n";
        std::cout << "Your number is: " << guessed_number << "\n";
        std::cout << "Lucky Number is: " << lucky_number << "\n";
        // Pass object by reference to change value
        winCondition(lucky_number, guessed_number, statistic);

        // Show Statistic
        std::cout << "Statistic\n";
        std::cout << "You have won the game: " << statistic.getGamesWon() << " times.\n";
        std::cout << "You have lsot the game: " << statistic.getGamesLost() << " times.\n";

        // Play again
        std::cout << "Play again? (j/n): ";
        std::cout << "\n";
        char input;
        std::cin >> input;
        playAgain = (input == 'j');
    } while (playAgain);

    // TODO make statistics
    // Winrate: Percentage

    // TODO Later:
    // Amount of Picked Numbers:
    // Amount of 5: X and Percentage
    // Amount of 4: X and Percentage
    // ...
    // Amount of Lucky Numbers:
    // Amount of Lucky Number 5: X and Percentage
    // Amount of Lucky Number 4: X and Percentage
    // ...

    // TODO
    // Simulate a player for 1.000.000 plays

    // TODO Display wrong inputs like chars etc.

    std::cout << "Game has ended! \n";

    return 0;
}