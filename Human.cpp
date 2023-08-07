#include "Human.h"
#include "MoveManager.h"
#include <iostream>

Human::Human() {
    this->name = "Human";
}

Human::Human(std::string name) {
    this->name = name;
}

Move * Human::makeMove() {
    MoveManager * m = new MoveManager;
    std::string move;
    std::cout << "Enter move: ";
    std:: cin >> move;
    return m->createMove(move);

}