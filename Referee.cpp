#include "Referee.h"

Referee::Referee() {}

Player * Referee::refGame(Player * player1, Player * player2) {
    char p1 = player1->makeMove();
    char p2 = player2->makeMove();

    if (p1 == 'R') {

        if (p2 == 'R') {
            return nullptr;
        }

        else if (p2 == 'P') {
            return player2;
        }

        else if (p2 == 'S') {
            return player1;
        }

    }

    else if (p1 == 'P') {

        if (p2 == 'R') {
            return player1;
        }

        else if (p2 == 'P') {
            return nullptr;
        }

        else if (p2 == 'S') {
            return player2;
        }

    }

    else if (p1 == 'S') {

         if (p2 == 'R') {
            return player2;
        }

        else if (p2 == 'P') {
            return player1;
        }

        else if (p2 == 'S') {
            return nullptr;
        }

    }

}