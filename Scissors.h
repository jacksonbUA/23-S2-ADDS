#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors: public Move {

    private:
    int doIWin(std::string OpponentMove);

    public:
    Scissors();

};
#endif