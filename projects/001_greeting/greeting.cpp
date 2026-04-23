#include "greeting.h"
#include <iostream>
#include <string>

std::string greeting(std::string user_name)
{
    std::string new_greeting = "Hello " + user_name;
    std::cout << new_greeting;
    return new_greeting;
}