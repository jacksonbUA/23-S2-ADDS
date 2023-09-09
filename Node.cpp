#include "Node.h"

Node::Node() {
  this->link = nullptr;
}

Node::Node(int data) {
  this->link = nullptr;
  this->data = data;
}

Node::Node(int data, Node* link) {
  this->data = data;
  this->link = link;
}

void Node::setLink(Node* link) {
  this->link = link;
}

Node* Node::getLink() {
  return this->link;
}

int Node::getData() {
  return this->data;
}

Node::~Node() {
  
}