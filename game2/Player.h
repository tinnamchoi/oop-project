#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>

#include "Pokemon.h"

using namespace std;

class Player {
 public:
  // Variables
  string name;
  vector<Pokemon> pokemon;
  
  // Printers
  void printPokemon();
};

#endif
