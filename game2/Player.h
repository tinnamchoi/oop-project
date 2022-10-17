#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

#include "Pokemon.h"

using namespace std;

class Player {
 public:
  // Variables
  string name;
  Pokemon pokemon[3];
  
  // Printers
  void printPokemon();
};

#endif
