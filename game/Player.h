#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

#include "Pokemon.h"

// main class for computer and person
class Player {
 public:
  Pokemon pokemon[3];  // this allows player 3 pokemon choices
  Player();
};

#endif
