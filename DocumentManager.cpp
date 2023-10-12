#include "DocumentManager.h"



DocumentManager::DocumentManager() {

}

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    this->key_db[name] = id;
    this->document_db[id] = std::pair(license_limit, 0);
}

void DocumentManager::addPatron(int patronID) {
    this->patron_db[patronID] = -1; //-1 specifies no document is borrowed

}

int DocumentManager::search(std::string name) {  // returns docid if name is in the document collection or 0 if the name is not in the collection
    if (this->key_db.count(name)) return this->key_db[name];
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) { // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
    if (!this->patron_db.count(patronID) || this->patron_db[patronID] != -1 ) return false;
    if (!this->document_db.count(docid)) return false;
    
    if (this->document_db[docid].first > this->document_db[docid].second) {
        this->document_db[docid].second++;
        patron_db[patronID] = docid;
        return true;
    }

    return false;
    
}

void DocumentManager::returnDocument(int docid, int patronID) {
    this->document_db[docid].second--;
    patron_db[patronID] = -1;

}
