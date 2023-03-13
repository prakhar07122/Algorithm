#include "Move.h"

Move::Move() { this->name = ""; }

Move::Move(std::string name) {
  this->name = name;
  // checking if the name of move choosen is valid for what game
  if ((name == "Rock") || (name == "Paper") || (name == "Scissors")) {
    this->gameName = "rps";  // setting gameName to rock paper scissors
  } else {
    this->gameName = "moropinzee";  // setting gameName to moropinzee
  }
}

std::string Move::getName() { return this->name; }

std::string Move::getGameName() { return this->gameName; }