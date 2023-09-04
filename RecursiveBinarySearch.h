#ifndef RECURSIVE_BINARY_SEARCH_H
#define RECURSIVE_BINARY_SEARCH_H

#include <vector>

class RecursiveBinarySearch {

    private:
    bool searchSubSection(std::vector<int> list, int search_value, int low, int high);


    public:
    RecursiveBinarySearch();
    bool search(std::vector<int> list, int search_value);
};

#endif