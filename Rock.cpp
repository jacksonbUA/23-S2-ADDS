#include "Rock.h"

Rock::Rock() {
    this->moveName = "Rock";
};

int Rock::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Rock") {
        return -1;
    }

    else if (OpponentMove == "Paper") {
        return 0;
    }

    else if (OpponentMove == "Scissors") {
        return 1;
    } 

}

