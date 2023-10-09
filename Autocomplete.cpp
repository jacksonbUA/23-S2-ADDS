    #include "AutoComplete.h"
    #include <stack>
    #include <iostream>

    AutoComplete::AutoComplete() {
        this->root = new TrieNode;
        this->root->depth = 0;
        
    }
    std::vector<std::string> AutoComplete::getSuggestions(std::string partialWord) {
        //prefix and null returns
        std::string prefix = "";
        std::vector<std::string> suggestions;
        TrieNode *traverse = this->root;
        for (unsigned int i = 0; i < partialWord.length(); i++) {
            if (traverse->children[partialWord[i] - 'a'] == nullptr) {
                return suggestions;
            }
            
            traverse = traverse->children[partialWord[i] - 'a'];
            prefix += partialWord[i];
        }
        std::cout << prefix;

        //search
        std::string token = prefix;
        std::stack<TrieNode *> node_stack;
        node_stack.push(traverse);
        
        
        while (!node_stack.empty()) {    
            TrieNode * current_node = node_stack.top();
            node_stack.pop();
            int counter = 0;
            for (int i = 0; i < 26; i++) {
                if (current_node->children[i] == nullptr) {
                    continue;
                }
                node_stack.push(current_node->children[i]);
                char append = 97 + i;
                counter++;
                token += append;

                
                if (current_node->children[i]->complete) {
                    suggestions.push_back(token);
                    token.erase(token.begin() + prefix.length(), token.begin() + prefix.length() + counter);
                
                }
            }
        }
        return suggestions;

    }  
    void AutoComplete::insert(std::string word) {
        TrieNode *traverse = this->root;
        for (unsigned int i = 0; i < word.length(); i++) {
            if (traverse->children[word[i] - 'a'] == nullptr) {
                traverse->children[word[i] - 'a'] = new TrieNode;
            }
            traverse = traverse->children[word[i] - 'a'];
            traverse->depth = i + 1;
        }
        traverse->complete = true;
    }
