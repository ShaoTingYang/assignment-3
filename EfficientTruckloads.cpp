#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    // Check if the result is already memoized
    if (memo.find({numCrates, loadSize}) != memo.end()) {
        return memo[{numCrates, loadSize}];
    }
    
    // Base case: If there are fewer crates than the load size, return 1 truck
    if (numCrates <= loadSize) {
        memo[{numCrates, loadSize}] = 1;
        return 1;
    }
    
    // Recursive case: Split the load into two equal parts and calculate trucks needed
    int halfLoad = numCrates / 2;
    int trucks = numTrucks(halfLoad, loadSize) + numTrucks(numCrates - halfLoad, loadSize);
    
    // Memoize the result
    memo[{numCrates, loadSize}] = trucks;
    
    return trucks;
}
