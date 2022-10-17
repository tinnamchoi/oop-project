#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

class Pokemon {
 public:
  std::string name;
  int id;
  int type;
  int level;
  int attack;
  int special;
  int baseDefense;
  int defense;
  int baseHealth;
  int health;
  Pokemon();
  Pokemon(int id);
  void newPokemon(int id);
  std::string getName();
  std::string getType();
  void printStats(std::string playerName);
};

#endif
