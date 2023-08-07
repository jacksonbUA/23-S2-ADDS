#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot: public Move {

    private:
    int doIWin(std::string OpponentMove);

    public:
    Robot();

};
#endif