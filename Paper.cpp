#include "Paper.h"

Paper::Paper() {};

int Paper::checkWin(std::string OpponentMove) {
    if (OpponentMove == "Rock") {
        return 1;
    }

    else if (OpponentMove == "Paper") {
        return -1;
    }

    else if (OpponentMove == "Scissors") {
        return 0;
    } 

    else {
        return 11; //undefined behaviour
    }

}
