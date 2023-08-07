#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey: public Move {

    private:
    int checkWin(std::string OpponentMove);

    public:
    Monkey();

};
#endif