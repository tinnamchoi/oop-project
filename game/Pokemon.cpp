#include "Pokemon.h"

#include <string>

Pokemon::Pokemon() {}
void Pokemon::newPokemon(int id) {
  level = 1;
  switch (id) {
    case 0:
      name = "Pokemon 1";
      type = 1;
      baseHealth = 3;
      attack = 2;
      special = 3;
      baseDefense = 4;
      break;
    case 1:
      name = "Pokemon 2";
      type = 2;
      baseHealth = 5;
      attack = 2;
      special = 4;
      baseDefense = 1;
      break;
    case 2:
      name = "Pokemon 3";
      type = 3;
      baseHealth = 2;
      attack = 3;
      special = 4;
      baseDefense = 3;
      break;
    case 3:
      name = "Pokemon 4";
      type = 1;
      baseHealth = 3;
      attack = 5;
      special = 1;
      baseDefense = 3;
      break;
    case 4:
      name = "Pokemon 5";
      type = 2;
      baseHealth = 3;
      attack = 2;
      special = 2;
      baseDefense = 5;
      break;
    case 5:
      name = "Pokemon 6";
      type = 3;
      baseHealth = 4;
      attack = 2;
      special = 4;
      baseDefense = 2;
      break;
  }
  defense = baseDefense;
  health = baseHealth;
}

std::string Pokemon::getName() {
  switch (id) {
    case 0:
      return "Pokemon 1";
    case 1:
      return "Pokemon 2";
    case 2:
      return "Pokemon 3";
    case 3:
      return "Pokemon 4";
    case 4:
      return "Pokemon 5";
    case 5:
      return "Pokemon 6";
  }
}
std::string Pokemon::getType() {
  switch (type) {
    case 1:
      return "Fire";
    case 2:
      return "Water";
    case 3:
      return "Grass";
  }
}

void Pokemon::printStats(std::string playerName) {
  std::cout << playerName << "'s" << getName() << " " << getType() << " "
            << level << " " << health << " " << defense << " " << attack << " "
            << special << std::endl;
}
