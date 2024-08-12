// Reverser.cpp
#include "Reverser.h"
#include <cstdlib>  // 为了使用 abs()

int Reverser::reverseDigit(int value) {
    int reversed = 0;
    int sign = (value < 0) ? -1 : 1;  // 处理负数
    value = abs(value);  // 取绝对值进行反转操作

    while (value > 0) {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }

    return sign * reversed;  // 恢复符号
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.length() <= 1) {
        return characters;
    }
    return reverseString(characters.substr(1)) + characters[0];
}
