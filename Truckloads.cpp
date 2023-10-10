#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    // Base case: If there are fewer crates than the load size, return 1 truck
    if (numCrates <= loadSize) {
        return 1;
    }
    // Recursive case: Split the load into two equal parts and calculate trucks needed
    int halfLoad = numCrates / 2;
    return numTrucks(halfLoad, loadSize) + numTrucks(numCrates - halfLoad, loadSize);
}
