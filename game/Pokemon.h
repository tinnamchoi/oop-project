#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>

class Pokemon {
 public:
  std::string name;
  int attack;
  int special;
  int health;
  int defense;
  int level;
  Pokemon();
  void newPokemon(int id);
};

#endif
