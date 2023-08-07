#include "Monkey.h"

Monkey::Monkey() {
    this->moveName = "Monkey";
};

int Monkey::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Ninja" || OpponentMove == "Robot") {
        return 1;
    }

    else if (OpponentMove == "Zombie" || OpponentMove == "Pirate") {
        return 0;
    }

    else if (OpponentMove == "Monkey") {
        return -1;
    } 

    else {
        return nullptr;
    }
}
