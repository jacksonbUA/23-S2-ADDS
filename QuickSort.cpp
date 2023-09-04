#include "Sort.h"
#include "QuickSort.h"

#include <iostream>

QuickSort::QuickSort() {};

void QuickSort::sortPartition(int begin, int end, std::vector<int>& list)  {
    int pivot = -1;
    int new_pivot = begin;

   
    pivot = list[begin + 3];
    for (size_t i = 0; i < list.size(); i++) {
        if(list[i] < pivot) {
            new_pivot++;
            list.insert(list.begin(), list[i]);
            list.erase(list.begin() + i + 1);
        }

        else if (list[i] > pivot) {
            new_pivot--;
            list.push_back(list[i]);
            list.erase(list.begin() + i);

        }
    }
        
        
  
    

}

std::vector<int> QuickSort::sort(std::vector<int> list) {
    sortPartition(0, list.size(), list);
    return list;
}

