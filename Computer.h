// This practical was completed in collaboration with myself,Radhika Joshi (a1850325) and Avi Aditya Malhotra (a1845049)

#ifndef COMPUTER_H
#define COMPUTER_H

#include"Move.h"
#include "Player.h"
#include<iostream>

class Computer : public Player {
public:
    
    Move* makeMove() override; // virtual class in player
    std::string getName() const override; // virtual class in player
};

#endif // COMPUTER_H