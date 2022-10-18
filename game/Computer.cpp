#include "Computer.h"

Computer::Computer(int landmark) {
  currentPokemon = 0;
  setName(names[landmark]);
  for (int i = 0; i < 3; i++) {
    pokemon.push_back(Pokemon());
    pokemon[i].newPokemon(rand() % 6);
    for (int j = 0; j < landmark; j++) {
      pokemon[i].levelUp();
    }
  }
}
void Computer::setName(string name) {
  this->name = name;
}
