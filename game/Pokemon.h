#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>

class Pokemon {
 public:
  std::string name;
  int attack;
  Pokemon();
  void newPokemon(int id);
};

#endif
