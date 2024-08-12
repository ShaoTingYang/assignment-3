// Reverser.h
#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {
public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);

private:
    int reverseHelper(int value); // 辅助递归函数
};

#endif

// Reverser.cpp
#include "Reverser.h"
#include <cmath>  // 为了使用 log10 和 pow

int Reverser::reverseDigit(int value) {
    int sign = (value < 0) ? -1 : 1;
    value = abs(value);
    
    return sign * reverseHelper(value);
}

int Reverser::reverseHelper(int value) {
    if (value == 0) return 0;
    
    int numDigits = (int)log10(value);
    return (value % 10) * pow(10, numDigits) + reverseHelper(value / 10);
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.length() <= 1) {
        return characters;
    }
    return reverseString(characters.substr(1)) + characters[0];
}
