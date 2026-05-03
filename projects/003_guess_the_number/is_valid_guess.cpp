#include "is_valid_guess.h"

bool isValidGuess(int guessed_number)
{
    if (guessed_number < 1 || guessed_number > 5)
    {
        return false;
    }
    else
    {
        return true;
    }
}