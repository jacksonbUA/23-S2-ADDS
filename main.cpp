#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <vector>
#include <iostream>
int main() {

    std::vector<int> list {1, 3, 5, 4, -5, 100, 7777, 2014};

    //quick sort is currently not implemented correctly, sorted with bubble sort instead

    BubbleSort b;
    std::vector<int> sorted_list = b.sort(list);
    RecursiveBinarySearch r;
    std::cout << r.search(sorted_list, 2015);   

    for (size_t i = 0; i < sorted_list.size(); i++) {
        std::cout << " " << list[i];
    }



}