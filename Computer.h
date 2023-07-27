#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

class Computer: public Player {

    Computer();
    char makeMove();
    std::string getName();




};

#endif