#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {

    protected: 
    std::string name;
    char move;
    
    public:
    Player::Player();
    virtual char makeMove() = 0;
    std::string getName();
};

#endif