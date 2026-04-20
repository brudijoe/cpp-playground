#include "greeting.h"
#include <iostream>
#include <string>

std::string greeting(std::string userName) {
    std::string newGreeting = "Hello " + userName;
    std::cout << newGreeting;
    return newGreeting;
}