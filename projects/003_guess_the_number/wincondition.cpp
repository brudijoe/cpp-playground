#include "wincondition.h"

bool wincondition(int lucky_number, int guessed_number)
{
    if (lucky_number == guessed_number)
    {
        return true;
    }
    return false;
}