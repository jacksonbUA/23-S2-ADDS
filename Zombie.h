#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie: public Move {

    private:
    int checkWin(std::string OpponentMove);

    public:
    Zombie();

};
#endif