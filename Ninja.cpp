#include "Ninja.h"

Ninja::Ninja() {
    this->moveName = "Ninja";
};

int Ninja::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Pirate" || OpponentMove == "Zombie") {
        return 1;
    }

    else if (OpponentMove == "Robot" || OpponentMove == "Monkey") {
        return 0;
    }

    else if (OpponentMove == "Ninja") {
        return -1;
    } 
}