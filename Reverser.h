#ifndef REVERSER_H
#define REVERSER_H

#include <string>

class Reverser {
public:
    int reverseDigit(int value);
    std::string reverseString(std::string characters);

private:
    int appendLastDigit(int number, int digit);
    std::string appendLastChar(std::string str, char ch);
};

#endif
