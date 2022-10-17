#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
 public:
  Computer(int landmark);
  int currentPokemon = 0;
  std::string names[10] = {
      "Computer 1", "Computer 2", "Computer 3", "Computer 4", "Computer 5",
      "Computer 6", "Computer 7", "Computer 8", "Computer 9", "Computer 10"};
};

#endif
