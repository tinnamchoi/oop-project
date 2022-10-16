#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>

class Pokemon {
 public:
  std::string name;
  int level;
  int attack;
  int special;
  int defense;
  int health;
  Pokemon();
  void newPokemon(int id);
};

#endif
