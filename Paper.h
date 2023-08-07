#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper: public Move {

    private:
    int doIWin(std::string OpponentMove);

    public:
    Paper();

};
#endif