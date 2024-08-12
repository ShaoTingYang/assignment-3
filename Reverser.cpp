// Reverser.cpp
#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    static int reversed = 0;
    static int remainder = 0;
    
    if(value <= 0) return reversed;
    remainder = value % 10;
    reversed = reversed * 10 + remainder;
    reverseDigit(value / 10);
    return reversed;
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.length() <= 1) {
        return characters;
    }
    return reverseString(characters.substr(1)) + characters[0];
}
