#include "Player.h"
#include <iostream>


Player::Player() {}

std::string Player::getName() {
    return this->name;
    
}

char Player::makeMove() {
    char move;
    std::cout << "Enter move: ";
    std:: cin >> move;
    return move;
}


