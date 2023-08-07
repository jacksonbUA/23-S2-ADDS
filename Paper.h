#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper: public Move {

    private:
    int checkWin(std::string OpponentMove);

    public:
    Paper();

};
#endif