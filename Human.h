// This practical was completed in collaboration with myself,Radhika Joshi (a1850325) and Avi Aditya Malhotra (a1845049)


#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>

#include "Move.h"
#include "Player.h"

class Human : public Player {
 public:
  Human();
  Human(const std::string& name);  // construtor taking a string as parameter
  Move* makeMove() override;       // virtual class in player
  std::string getName() const override;  // virtual class in player
 private:
  std::string name;
};

#endif  // HUMAN_H