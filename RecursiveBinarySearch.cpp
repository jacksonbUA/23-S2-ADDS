#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch() {}

bool RecursiveBinarySearch::searchSubSection(std::vector<int> list, int search_value, int low, int high) {
    if (high >= low) {
        
        if (list[low + (high - low) / 2] == search_value) {
            return true;
        }
           

        if (list[low + (high - low) / 2] < search_value) {
            return searchSubSection(list, search_value, (low + (high - low) / 2) + 1, high);
        }
        
        else {
             return searchSubSection(list, search_value, low, (low + (high - low) / 2) - 1);

        }
    }

    return false;
}

bool RecursiveBinarySearch::search(std::vector<int> list, int search_value) {
    return searchSubSection(list, search_value, 0, list.size());
}