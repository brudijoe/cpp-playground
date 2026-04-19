#include "greeting.h"
#include <iostream>

using namespace std;

string greeting(string userName) {
    string newGreeting = "Hello " + userName;
    cout << newGreeting;
    return newGreeting;
}