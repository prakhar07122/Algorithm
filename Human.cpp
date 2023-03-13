#include "Human.h"

#include <iostream>

#include "Move.h"

Human::Human(const std::string& name) {  // constrcutor with a string parameter
  this->name = name;
}

Human::Human() {
  this->name = "Human";  // the Human name is intialised
}

Move* Human::makeMove() {
  std::cout << "Enter Move: ";  // user input prompt
  std::string input;
  std::cin >> input;
  Move* makeMove = new Move(input);  // object taking the input
  return makeMove;
}

std::string Human::getName() const { return this->name; }
