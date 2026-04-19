#include "square.h"
#include <iostream>

using namespace std;

int square(int number) {
    int result = number * number;
    cout << "The square of the number " << number << " is " << result;
    return result;
}