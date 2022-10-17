#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

#include "Pokemon.h"

// main class for computer and person
class Player {
 public:
  std::string name;
  Pokemon pokemon[3];  // this allows player 3 pokemon choices
  Player();
  int currentPokemon;
  void printPokemon();
};

#endif
