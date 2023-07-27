#include "Computer.h" 

Computer::Computer() {
    this->name = "Computer";
}

char Computer::makeMove() {
    this->move = 'R';
}

std::string Computer::getName() {
    return this->name;
}

