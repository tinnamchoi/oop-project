#include "Pokemon.h"

#include <string>

Pokemon::Pokemon() {}
void Pokemon::newPokemon(int id) {
  this->id = id;
  level = 1;
  switch (id) {
    case 0:
      type = 1;
      baseHealth = 20;
      attack = 4;
      special = 5;
      baseDefense = 5;
      break;
    case 1:
      type = 2;
      baseHealth = 18;
      attack = 4;
      special = 5;
      baseDefense = 6;
      break;
    case 2:
      type = 3;
      baseHealth = 16;
      attack = 5;
      special = 6;
      baseDefense = 5;
      break;
    case 3:
      type = 1;
      baseHealth = 20;
      attack = 2;
      special = 4;
      baseDefense = 10;
      break;
    case 4:
      type = 2;
      baseHealth = 20;
      attack = 2;
      special = 5;
      baseDefense = 7;
      break;
    case 5:
      type = 3;
      baseHealth = 24;
      attack = 2;
      special = 4;
      baseDefense = 8;
      break;
  }
  defense = baseDefense;
  health = baseHealth;
}

std::string Pokemon::getName() {
  switch (id) {
    case 0:
      return "Chilli-Dog";
    case 1:
      return "Water-Bear";
    case 2:
      return "Lettuce-Man";
    case 3:
      return "HotShot";
    case 4:
      return "Ice-Ice-Baby";
    case 5:
      return "Leaf-Me-Alone";
  }
  return "Error";
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
  return "Error";
}

void Pokemon::printStats(std::string playerName) {
  std::cout << playerName << "'s " << getName() << std::endl;
  std::cout << "Type  Level Health Attack Special Defense" << std::endl;
  std::cout << getType() << " " << level << "     " << health << "      " << attack << "      "
            << special << "       " << defense << std::endl << std::endl;
}
