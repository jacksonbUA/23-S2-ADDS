#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie: public Move {

    private:
    int doIWin(std::string OpponentMove);

    public:
    Zombie();

};
#endif