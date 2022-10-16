#include "Pokemon.h"

#include <string>

Pokemon::Pokemon() {}
void Pokemon::newPokemon(int id) {
  level = 1;
  switch (id) {
    case 0:
      name = "Pokemon 1";
      attack  = 2;
      special = 3;
      health  = 3;
      defense = 4;
      break;
    case 1:
      name = "Pokemon 2";
      attack  = 2;
      special = 4;
      health  = 5;
      defense = 1;
      break;
    case 2:
      name = "Pokemon 3";
      attack  = 3;
      special = 4;
      health  = 2;
      defense = 3;
      break;
    case 3:
      name = "Pokemon 4";
      attack  = 5;
      special = 1;
      health  = 3;
      defense = 3;
      break;
    case 4:
      name = "Pokemon 5";
      attack  = 2;
      special = 2;
      health  = 3;
      defense = 5;
      break;
    case 5:
      name = "Pokemon 6";
      attack  = 2;
      special = 4;
      health  = 4;
      defense = 2;
      break;
  }
}
