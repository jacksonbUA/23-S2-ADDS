#include "Zombie.h"

Zombie::Zombie() {
    this->moveName = "Zombie";
};

int Zombie::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Pirate" || OpponentMove == "Monkey") {
        return 1;
    }

    else if (OpponentMove == "Ninja" || OpponentMove == "Robot") {
        return 0;
    }

    else if (OpponentMove == "Zombie") {
        return -1;
    } 

    else {
        return 11; //undefined behaviour
    }
}