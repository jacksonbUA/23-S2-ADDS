#include "LinkedList.h"
#include "Node.h"

#include <limits>
#include <iostream>


LinkedList::LinkedList() {
  this->head = new Node();
}


LinkedList::LinkedList(int* array, int len) {
  
  this->head = new Node(array[0]);
  Node* traverse_node = this->head;

  for (int i = 1; i < len; i++) {
    traverse_node->setLink(new Node(array[i])); //set link of current node to a new node
    traverse_node = traverse_node->getLink(); //sets traversed_node to child node like an itterator  
  }

  traverse_node->setLink(nullptr); //sets last nodes link to a nullptr

}

void LinkedList::insertPosition(int pos, int newNum) {
  
  Node* traverse_node = this->head->getLink();
  Node* link_node = this->head;  //holds previous node to traverse_node to link new node
  
  //adds node to list as new head
  if (pos <= 1) {
    this->head = new Node(newNum, this->head);
  }

  else {
    
    for (int i = 2; i < pos; i++) {
      
      if (traverse_node->getLink() == nullptr) {
        break;
      }

      traverse_node = traverse_node->getLink();
      link_node = link_node->getLink();
    }

    Node * inserted_node = new Node(newNum);
    link_node->setLink(inserted_node);
    inserted_node->setLink(traverse_node);

  }

}

bool LinkedList::deletePosition(int pos) {
  Node* traverse_node = this->head->getLink();
  Node* link_node = this->head; //holds previous node to traverse_node to link new node
  for (int i = 2; i < pos; i++) {
    
    if (traverse_node->getLink() == nullptr) {
      return false;
    }

    traverse_node = traverse_node->getLink();
    link_node = link_node->getLink();
  }

  link_node->setLink(traverse_node->getLink());
  delete traverse_node;
  return true;
}

int LinkedList::get(int pos) {
  Node* traverse_node = this->head;
  for (int i = 1; i < pos; i++) {
  
    if (this->head == nullptr) {

      return std::numeric_limits<int>::max();
    }

    traverse_node = traverse_node->getLink();
  }

  return traverse_node->getData();

}

int LinkedList::search(int target) {
 
  int acc = 1;
  Node* traverse_node = this->head;

  while(traverse_node->getLink() != nullptr) {
    if (traverse_node->getData() == target) {
      return acc;
    }

    acc++;
    traverse_node = traverse_node->getLink();
  }

  return -1;

}

void LinkedList::printList() {
  
  Node* traverse_node = this->head;

  if (traverse_node != nullptr) {

    std::cout << "[" << traverse_node->getData();
    traverse_node = traverse_node->getLink();
      
      while (traverse_node != nullptr) {
        
        std::cout << " " << traverse_node->getData();
        traverse_node = traverse_node->getLink();

    }

    std::cout << "]";

  }
}

//Deletes nodes 1 by 1 while traversing by maintaining a pointer to the next node that delete_node can hoist to

LinkedList::~LinkedList() {

  Node* traversed_node = this->head->getLink();
  Node* delete_node = this->head;

  while(traversed_node->getLink() != nullptr) {
    delete delete_node;
    delete_node = traversed_node;
    traversed_node = this->head->getLink();
  }

}