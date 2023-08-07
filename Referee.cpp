#include "Referee.h"



Referee::Referee() {}

Player * Referee::refGame(Player * player1, Player * player2) {
    Move * p1 = player1->makeMove();
    Move * p2 = player2->makeMove();
    
    switch(p1->doIWin(p2->getMove())) {
        case 1:
            return player1;
            break;
        case 0:
            return player2;
            break;
        case -1:
            return nullptr;
            break;  
        default:
            return nullptr;
    }
    

    

    

}