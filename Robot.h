#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot: public Move {

    private:
    int checkWin(std::string OpponentMove);

    public:
    Robot();

};
#endif