#include "Truckloads.h"

int Truckloads::numTruckloads(int numPackages, int maxLoad) {
    if (numPackages <= maxLoad) {
        return 1; // Only one truck needed
    } else {
        int halfPackages = numPackages / 2;
        return numTruckloads(halfPackages, maxLoad) + numTruckloads(numPackages - halfPackages, maxLoad);
    }
}
