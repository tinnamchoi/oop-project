#include "Pokemon.h"

#include <string>

Pokemon::Pokemon() {}
void Pokemon::newPokemon(std::string name) {
  this->name = name;
  if (name == "Bulbasaur") {
    attack = 49;
    return;
  }
  if (name == "Charmander") {
    attack = 52;
    return;
  }
  if (name == "Squirtle") {
    attack = 48;
    return;
  }
  if (name == "Pikachu") {
    attack = 55;
    return;
  }
  if (name == "Eevee") {
    attack = 55;
    return;
  }
  if (name == "Mewtwo") {
    attack = 99;
    return;
  }
}
