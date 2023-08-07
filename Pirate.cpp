#include "Pirate.h"

Pirate::Pirate() {
    this->moveName = "Pirate";
};

int Pirate::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Robot" || OpponentMove == "Monkey") {
        return 1;
    }

    else if (OpponentMove == "Zombie" || OpponentMove == "Ninja") {
        return 0;
    }

    else if (OpponentMove == "Pirate") {
        return -1;
    } 

    else {
        return 11; //undefined behaviour
    }
}