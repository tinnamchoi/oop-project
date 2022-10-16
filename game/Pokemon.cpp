#include "Pokemon.h"

#include <string>

Pokemon::Pokemon() {}
void Pokemon::newPokemon(int id) {
  switch (id) {
    case 0:
      name = "Bulbasaur";
      attack = 49;
      break;
    case 1:
      name = "Charmander";
      attack = 52;
      break;
    case 2:
      name = "Squirtle";
      attack = 48;
      break;
    case 3:
      name = "Pikachu";
      attack = 55;
      break;
    case 4:
      name = "Eevee";
      attack = 55;
      break;
    case 5:
      name = "Mewtwo";
      attack = 99;
      break;
  }
}
