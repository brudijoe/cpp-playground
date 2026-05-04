#include <iostream>
#include <istream>
#include "is_valid_guess.h"

int readGuess(int &guessed_number, std::istream &in, std::ostream &out)
{
    out << "Guess a number from 1 to 5: ";
    while (!(in >> guessed_number) || !isValidGuess(guessed_number))
    {
        out << "Invalid input. Guess a number from 1 to 5: ";
        in.clear();
        in.ignore(10000, '\n');
    }
    return guessed_number;
}