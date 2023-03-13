// This practical was completed in collaboration with myself,Radhika Joshi (a1850325) and Avi Aditya Malhotra (a1845049)


#ifndef MOVE_H
#define MOVE_H

#include <iostream>

class Move {
 private:
  std::string name;
  std::string gameName;  // game move name

 public:
  Move();
  Move(std::string name);  // constructor tkaing a string parameter
  std::string getName();
  std::string
  getGameName();  // creating a function to get a game-specific move name
};

#endif