#include "EfficientTruckloads.h"
#include <vector>

std::vector<std::vector<int>> memo; // Memoization table

int EfficientTruckloads::numTruckloads(int numPackages, int maxLoad) {
    memo.resize(numPackages + 1, std::vector<int>(maxLoad + 1, -1));
    return calculateTruckloads(numPackages, maxLoad);
}

int EfficientTruckloads::calculateTruckloads(int numPackages, int maxLoad) {
    if (numPackages <= maxLoad) {
        return 1; // Only one truck needed
    }

    if (memo[numPackages][maxLoad] != -1) {
        return memo[numPackages][maxLoad];
    }

    int halfPackages = numPackages / 2;
    int truckloads = calculateTruckloads(halfPackages, maxLoad) + calculateTruckloads(numPackages - halfPackages, maxLoad);

    memo[numPackages][maxLoad] = truckloads;
    return truckloads;
}
