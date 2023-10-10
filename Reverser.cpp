#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    if (value < 10) {
        return value; // Single-digit number, no change needed
    } else {
        int lastDigit = value % 10;
        int remainingDigits = value / 10;
        return appendLastDigit(reverseDigit(remainingDigits), lastDigit);
    }
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) {
        return characters; // Base case: empty string
    } else {
        char lastChar = characters.back();
        characters.pop_back();
        return appendLastChar(reverseString(characters), lastChar);
    }
}

int Reverser::appendLastDigit(int number, int digit) {
    return number * 10 + digit;
}

std::string Reverser::appendLastChar(std::string str, char ch) {
    return str + ch;
}
