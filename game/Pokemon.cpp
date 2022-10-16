#include "Pokemon.h"

#include <string>

Pokemon::Pokemon() {}
void Pokemon::newPokemon(int id) {
  level = 1;
  switch (id) {
    case 0:
      name = "Pokemon 1";
      type = 1;
      attack = 2;
      special = 3;
      baseHealth = 3;
      baseDefense = 4;
      break;
    case 1:
      name = "Pokemon 2";
      type = 2;
      attack = 2;
      special = 4;
      baseHealth = 5;
      baseDefense = 1;
      break;
    case 2:
      name = "Pokemon 3";
      type = 3;
      attack = 3;
      special = 4;
      baseHealth = 2;
      baseDefense = 3;
      break;
    case 3:
      name = "Pokemon 4";
      type = 1;
      attack = 5;
      special = 1;
      baseHealth = 3;
      baseDefense = 3;
      break;
    case 4:
      name = "Pokemon 5";
      type = 2;
      attack = 2;
      special = 2;
      baseHealth = 3;
      baseDefense = 5;
      break;
    case 5:
      name = "Pokemon 6";
      type = 3;
      attack = 2;
      special = 4;
      baseHealth = 4;
      baseDefense = 2;
      break;
  }
  defense = baseDefense;
  health = baseHealth;
}
