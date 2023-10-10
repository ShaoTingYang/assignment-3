#include "Reverse.h"
#include <string>

int Reverse::reverseDigit(int value) {
    // Base case: If the value is a single digit, return it
    if (value < 10) {
        return value;
    }
    // Recursive case: Reverse the digits
    int lastDigit = value % 10;
    int remainingDigits = value / 10;
    int reversed = reverseDigit(remainingDigits);
    return (lastDigit * static_cast<int>(pow(10, floor(log10(reversed) + 1)))) + reversed;
}

std::string Reverse::reverseString(const std::string& letters) {
    // Base case: If the string is empty, return it
    if (letters.empty()) {
        return letters;
    }
    // Recursive case: Reverse the string
    return reverseString(letters.substr(1)) + letters[0];
}
