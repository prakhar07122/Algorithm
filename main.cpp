// This practical was completed in collaboration with myself,Radhika Joshi (a1850325) and Avi Aditya Malhotra (a1845049)

#include <iostream>
#include <memory>

#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main() {
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  Player *human = new Human(name);    // new human object
  Player *computer = new Computer();  // new computer object in the heap
  Referee referee;                    // referee object
  Player *winner = referee.refGame(human, computer);  // deciding the winner
  if (winner == nullptr) {
    std::cout << "It's a tie." << std::endl;  // tie
  } else {
    std::cout << winner->getName() << " Wins."
              << std::endl;  // the winner's name
  }

  return 0;
}
