#include "Referee.h"

#include <iostream>

#include "Move.h"

Referee::Referee() {}

Player *Referee::refGame(Player *player1, Player *player2) {
  Move *move1 = player1->makeMove();         // move obejct 1
  Move *move2 = player2->makeMove();         // move obejct 2
  if (move1->getName() == move2->getName())  // compare the two objects
  {
    return nullptr;  // its a tie
  }

  // if rps game, the following rules are used to base upon a winner
  if (move1->getGameName() == "rps") {
    if (((move1->getName() == "Rock") && (move2->getName() == "Scissors")) ||
        ((move1->getName() == "Paper") && (move2->getName() == "Rock")) ||
        ((move1->getName() == "Scissors") && (move2->getName() == "Paper"))) {
      return player1;
    } else {
      return player2;
    }
  } else  // if moropinzee game, the winner is basesd upon following rules
  {
    if (((move1->getName() == "Robot") &&
         ((move2->getName() == "Ninja") || (move2->getName() == "Zombie"))) ||
        ((move1->getName() == "Zombie") &&
         ((move2->getName() == "Pirate") || (move2->getName() == "Monkey"))) ||
        ((move1->getName() == "Monkey") &&
         ((move2->getName() == "Ninja") || (move2->getName() == "Robot"))) ||
        ((move1->getName() == "Ninja") &&
         ((move2->getName() == "Pirate") || (move2->getName() == "Zombie"))) ||
        ((move1->getName() == "Pirate") &&
         ((move2->getName() == "Robot") || (move2->getName() == "Monkey")))) {
      return player1;
    } else {
      return player2;
    }
  }
}
