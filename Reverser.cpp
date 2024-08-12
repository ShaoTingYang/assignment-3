int Reverser::reverseDigit(int value) {
    int reversed = 0;
    while (value > 0) {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }
    return reversed;
}
