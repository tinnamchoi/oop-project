#include "Pokemon.h"

using namespace std;

// Constructor
Pokemon::Pokemon() {
  experience = 0;
  level = 1;
}

// Setters
void Pokemon::newPokemon(int id) {
  this->id = id;
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
void Pokemon::resetStats() {
  defense = baseDefense;
  health = baseHealth;
}
void Pokemon::levelUp() {
  level++;
  experience = 0;
  // Multiply stats by 2
  baseHealth += 2;
  health += 2;
  attack += 2;
  special += 2;
  baseDefense += 2;
  defense += 2;
}

// Getters
string Pokemon::getName() {
  switch (id) {
    case 0:
      return "Chilli-Dog   ";
    case 1:
      return "Water-Bear   ";
    case 2:
      return "Lettuce-Man  ";
    case 3:
      return "HotShot      ";
    case 4:
      return "Ice-Ice-Baby ";
    case 5:
      return "Leaf-Me-Alone";
  }
  return "Error";
}
string Pokemon::getType() {
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
