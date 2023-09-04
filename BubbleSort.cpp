#include "Sort.h"
#include "BubbleSort.h"

#include <iostream>

BubbleSort::BubbleSort() {};

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    bool swap = true;
    while (swap) {
        swap = false;
        for (size_t i = 0; i < list.size() - 1; i++) {
            if (list[i] > list[i + 1]) {
                std::swap(list[i], list[i + 1]);
                swap = true;
            }
        }
    }
    
    return list;
}
