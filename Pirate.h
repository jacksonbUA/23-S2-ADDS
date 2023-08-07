#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate: public Move {

    private:
    int checkWin(std::string OpponentMove);

    public:
    Pirate();

};
#endif