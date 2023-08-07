#include "Computer.h" 
#include "MoveManager.h"

Computer::Computer() {
    this->name = "Computer";
}

Move * Computer::makeMove() {
    MoveManager * m = new MoveManager;
    return m->createMove("Rock");
}



