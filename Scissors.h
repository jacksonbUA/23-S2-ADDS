#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors: public Move {

    private:
    int checkWin(std::string OpponentMove);

    public:
    Scissors();

};
#endif