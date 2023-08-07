#include "MoveManager.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Robot.h"

MoveManager::MoveManager() {
    std::cout << "Move Manager created.";
}

Move * MoveManager::createMove(std::string move) {
    if (move == "Rock") {
        return new Rock();
    }

    else if(move == "Paper") {
        return new Paper();
    }

    else if (move == "Scissors") {
        return new Scissors();   
    }

    else if(move == "Monkey") {
        return new Monkey();
    }

    else if(move == "Robot") {
        return new Robot();
    }

    else if(move == "Pirate") {
        return new Pirate();
    }

    else if(move == "Ninja") {
        return new Ninja();
    }

    else if(move == "Zombie") {
        return new Zombie();
    } 
    else {
        return nullptr; //undefined behaviour
    }
}
