#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <vector>
#include <iostream>
#include <string>
int main() {
    std::string input;
    std::vector<int> list;
    getline(std::cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            list.push_back(input[i] - '0');
        }
    }

    //quick sort is currently not implemented correctly, sorted with bubble sort instead

    BubbleSort b;
    std::vector<int> sorted_list = b.sort(list);
    RecursiveBinarySearch r;

    if (r.search(sorted_list, 1)) {
        std::cout << "true ";
    }
    else {
        std::cout << "false ";   
    }
  

    for (size_t i = 0; i < sorted_list.size(); i++) {
        std::cout << " " << list[i];
    }
}