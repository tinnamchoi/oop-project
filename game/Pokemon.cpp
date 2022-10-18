#include "Pokemon.h"

#include <string>

Pokemon::Pokemon() {}
void Pokemon::newPokemon(int id) {
  this->id = id;
  level = 1;
  switch (id) {
    case 0:
      type = 1;
      baseHealth = 3;
      attack = 2;
      special = 3;
      baseDefense = 4;
      break;
    case 1:
      type = 2;
      baseHealth = 5;
      attack = 2;
      special = 4;
      baseDefense = 1;
      break;
    case 2:
      type = 3;
      baseHealth = 2;
      attack = 3;
      special = 4;
      baseDefense = 3;
      break;
    case 3:
      type = 1;
      baseHealth = 3;
      attack = 5;
      special = 1;
      baseDefense = 3;
      break;
    case 4:
      type = 2;
      baseHealth = 3;
      attack = 2;
      special = 2;
      baseDefense = 5;
      break;
    case 5:
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
      return "Fire ";
    case 2:
      return "Water";
    case 3:
      return "Grass";
  }
}

void Pokemon::printStats(std::string playerName) {
  std::cout << playerName << "'s " << getName() << std::endl;
  std::cout << "Type  Level Health Attack Special Defense" << std::endl;
  std::cout << getType() << " " << level << "     " << health << "      " << attack << "      "
            << special << "       " << defense << std::endl << std::endl;
}
