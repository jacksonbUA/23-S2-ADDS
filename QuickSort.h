#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort: public Sort {

    private:
    void sortPartition(int begin, int end, std::vector<int>& list);

    public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list);
    
    

};

#endif