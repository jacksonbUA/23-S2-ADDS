#include "Paper.h"

Paper::Paper() {};

int Paper::doIWin(std::string OpponentMove) {
    if (OpponentMove == "Rock") {
        return 1;
    }

    else if (OpponentMove == "Paper") {
        return -1;
    }

    else if (OpponentMove == "Scissors") {
        return 0;
    } 

}
