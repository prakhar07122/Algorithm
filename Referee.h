// This practical was completed in collaboration with myself,Radhika Joshi (a1850325) and Avi Aditya Malhotra (a1845049)

#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>

#include "Player.h"

class Referee {
 public:
  Referee();
  Player* refGame(Player* player1,
                  Player* player2);  // takes two pointers as parameters
};

#endif  // REFEREE_H