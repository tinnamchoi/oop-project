#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
 public:
  Computer(int landmark);
  int currentPokemon = 0;
};

#endif
