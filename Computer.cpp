#include "Computer.h"

#include <iostream>

#include "Move.h"

Move* Computer::makeMove() {
  Move* move = new Move("Rock");  // new move object for rock
  return move;  // Computer always plays rock- the object pointer
}

std::string Computer::getName() const { return "Computer"; }
