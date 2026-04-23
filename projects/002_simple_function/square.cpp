#include "square.h"
#include <iostream>
#include <string>

int square(int number)
{
    int result = number * number;
    std::cout << "The square of the number " << number << " is " << result;
    return result;
}