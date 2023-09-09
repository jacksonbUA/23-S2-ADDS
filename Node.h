#ifndef NODE_H
#define NODE_H

class Node {

  private:
  int data;
  Node* link;

  public:
  Node();
  Node(int data);
  Node(int data, Node* link);
  ~Node();
  void setLink(Node* link);
  Node* getLink();
  int getData();
  

};
#endif