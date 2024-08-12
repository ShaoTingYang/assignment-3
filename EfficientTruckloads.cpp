
// EfficientTruckloads.cpp
#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    memo.clear(); 
    return calculateTrucks(numCrates, loadSize);
}

int EfficientTruckloads::calculateTrucks(int numCrates, int loadSize) {
    if (memo.find(numCrates) != memo.end()) return memo[numCrates];
    if (numCrates <= loadSize) return memo[numCrates] = 1;
    return memo[numCrates] = calculateTrucks((numCrates + 1) / 2, loadSize) + calculateTrucks(numCrates / 2, loadSize);
}
