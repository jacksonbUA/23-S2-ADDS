#ifndef TRIENODE_H
#define TRIENODE_H

class TrieNode {

    public:
    TrieNode();
    TrieNode *children[26];
    bool complete;
    int depth;
};

#endif