// Reverser.cpp
#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    int reversed = 0;
    while (value > 0) {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }
    return reversed;
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.length() <= 1) {
        return characters;
    }
    return reverseString(characters.substr(1)) + characters[0];
}
