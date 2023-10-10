#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

class EfficientTruckloads {
public:
    static int numTruckloads(int numPackages, int maxLoad);

private:
    static int calculateTruckloads(int numPackages, int maxLoad);
};

#endif
