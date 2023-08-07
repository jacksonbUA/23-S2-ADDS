#include "Scissors.h"

Scissors::Scissors() {
    this->moveName = "Scissors";
};

int Scissors::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Rock") {
        return 0;
    }

    else if (OpponentMove == "Paper") {
        return 1;
    }

    else if (OpponentMove == "Scissors") {
        return -1;
    } 

    else {
        return 11; //undefined behaviour
    }

}
