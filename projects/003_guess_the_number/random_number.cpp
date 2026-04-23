#include <iostream>
#include <random>
#include "random_number.h"

int randomNumber()
{
    int random_number;

    // 1. Obtain a random seed from the hardware
    std::random_device rd;

    // 2. Initialize the engine (Mersenne Twister) with the seed
    std::mt19937 gen(rd());

    // 3. Define your range (e.g., between 1 and 100 inclusive)
    std::uniform_int_distribution<> distrib(1, 5);

    // 4. Generate the number
    return random_number = distrib(gen);
}