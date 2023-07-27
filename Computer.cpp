#include "Computer.h" 

Computer::Computer() {
    this->name = "Computer";
}

char Computer::makeMove() {
    return 'R';
}

std::string Computer::getName() {
    return this->name;
}

