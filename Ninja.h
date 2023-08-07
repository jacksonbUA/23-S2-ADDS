#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja: public Move {

    private:
    int doIWin(std::string OpponentMove);

    public:
    Ninja();

};
#endif