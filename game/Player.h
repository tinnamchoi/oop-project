#ifndef PLAYER_H
#define PLAYER_H

#include "Trainer.h"

using namespace std;

class Player : public Trainer {
 public:
  // Variables
  int currentPokemon;
  
  // Functions
  bool swapPokemon(int);
};

#endif
