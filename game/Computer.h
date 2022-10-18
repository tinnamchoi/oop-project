#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
 public:
  Computer(int landmark);
  int currentPokemon = 0;
  std::string names[10] = {"Enemy Bryan",  "Enemy Gregory", "Enemy Cassie",
                           "Enemy Peter",  "Enemy Rowley",  "Enemy Regina",
                           "Enemy Steven", "Enemy Darcy",   "Enemy Sarah",
                           "Enemy Timothy"};
};

#endif
