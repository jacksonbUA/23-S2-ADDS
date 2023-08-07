#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {

    protected: 
    std::string name;
    
    
    public:
    Player();
    virtual Move * makeMove() = 0;
    std::string getName();
};

#endif