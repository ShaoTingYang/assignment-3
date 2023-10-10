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
    return (lastDigit * static_cast<int>(pow(10, floor(log10(reverserd) + 1)))) + reverserd;
}

std::string Reverser::reverserString(const std::string& letters) {
    // Base case: If the string is empty, return it
    if (letters.empty()) {
        return letters;
    }
    // Recursive case: Reverser the string
    return reverserString(letters.substr(1)) + letters[0];
}
