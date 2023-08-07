#ifndef MOVEMANAGER_H
#define MOVEMANAGER_H
#include <string>
#include "Move.h"
#include <iostream>
class MoveManager {
    public:
    MoveManager();
    Move * createMove(std::string MoveType);

};
#endif