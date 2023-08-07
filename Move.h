#ifndef MOVE_H
#define MOVE_H
#include <iostream>
class Move {

    protected:
    std::string moveName;

    public:
    Move();
    virtual int doIWin(std::string OpponentMove) = 0;
    std::string getName();
};
#endif