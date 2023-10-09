#include "TrieNode.h"

TrieNode::TrieNode() {
    this->complete = false;

    for (int i = 0; i < 26; i++) {
        children[i] = nullptr;
    }
}
