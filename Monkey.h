#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey: public Move {

    private:
    int doIWin(std::string OpponentMove);

    public:
    Monkey();

};
#endif