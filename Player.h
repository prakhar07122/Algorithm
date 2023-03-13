// This practical was completed in collaboration with myself,Radhika Joshi (a1850325) and Avi Aditya Malhotra (a1845049)

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

#include "Move.h"

class Player {
 public:
  virtual std::string getName() const = 0;  // abstract class
  virtual Move* makeMove() = 0;             // abstact class
};

#endif