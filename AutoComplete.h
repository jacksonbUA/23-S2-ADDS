#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "TrieNode.h"
#include <vector>
#include <string>


class AutoComplete {
   

    public:
    TrieNode* root;
    AutoComplete();
    std::vector<std::string> getSuggestions(std::string partialWord);  // return the known words that start with partialWord
    void insert(std::string word); // add a word to the known words

};

#endif