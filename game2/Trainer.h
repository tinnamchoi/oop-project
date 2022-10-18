#ifndef TRAINER_H
#define TRAINER_H

#include <iostream>
#include <string>
#include <vector>

#include "Pokemon.h"

using namespace std;

class Trainer {
 public:
  // Variables
  string name;
  vector<Pokemon> pokemon;
  
  // Printers
  void printPokemon();
};

#endif
