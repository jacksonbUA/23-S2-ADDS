#include "Robot.h"

Robot::Robot() {
    this->moveName = "Robot";
};

int Robot::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Ninja" || OpponentMove == "Zombie") {
        return 1;
    }

    else if (OpponentMove == "Monkey" || OpponentMove == "Pirate") {
        return 0;
    }

    else if (OpponentMove == "Robot") {
        return -1;
    } 

    else {
        return 11; //undefined behaviour
    }
}