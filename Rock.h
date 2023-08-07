#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock: public Move {

    private:
    int doIWin(std::string OpponentMove);

    public:
    Rock();

};
#endif