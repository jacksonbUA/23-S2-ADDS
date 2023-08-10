#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads() {};

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return  1;
    }

    if (numCrates % 2 == 0) {
        return numTrucks(numCrates / 2, loadSize) + 
        numTrucks(numCrates / 2, loadSize);
    }

    else if (numCrates % 2 == 1) {
        return numTrucks(numCrates / 2, loadSize) + 
        numTrucks((numCrates / 2) + 1, loadSize);

    }

        
        
    
}



