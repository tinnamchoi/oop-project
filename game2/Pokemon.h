#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;

class Pokemon {
 public:
  // Variables
  int id;
  int type;
  int experience;
  int level;
  int attack;
  int special;
  int baseDefense;
  int defense;
  int baseHealth;
  int health;
  
  // Constructor
  Pokemon();
  
  // Setters
  void newPokemon(int id);
  void resetStats();
  void levelUp();
  
  // Getters
  string getName();
  string getType();
};

#endif
