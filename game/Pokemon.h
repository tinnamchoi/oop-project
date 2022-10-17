#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>

class Pokemon {
 public:
  std::string name;
  int type;
  int level;
  int attack;
  int special;
  int baseDefense;
  int defense;
  int baseHealth;
  int health;
  Pokemon();
  void newPokemon(int id);
  void printStats();
};

#endif
