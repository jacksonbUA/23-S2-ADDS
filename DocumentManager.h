#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <utility>

//-----------------------------------------------------------------------------------
// Justification regarding data structures. 
// Unordered_maps were used due to their fast access when the key is known (always) 
// having a worstcase of O(n) with average case of O(1). For the functions defined,
// multiple keys were needed (both docid and title) which meant i needed another map
// to convert to the desired key format. I considered using a custom struct but 
// implementing a custom hashing function and comparision seemed beyond the scope 
// of this assigment. Other STL containers such as stacks, vectors etc didn't seem
// to offer fast key retrieval or came at a cost of space or slow insertion/deletion.
//-----------------------------------------------------------------------------------

class DocumentManager {

    private:
    std::unordered_map<std::string, int> key_db; //title to docid as both are keys
    std::unordered_map<int, std::pair<int, int>> document_db; //id, liscence limit, borrowed
    std::unordered_map<int, int> patron_db; //patron id, id of book borrowed;

    public:
    DocumentManager();

    void addDocument(std::string name, int id, int license_limit);

    void addPatron(int patronID);

    int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

    bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

    void returnDocument(int docid, int patronID);

};

#endif