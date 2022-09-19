#ifndef POKEMON_H
#define POKEMON_H

#include <string>

#include "Move.h"

class Pokemon {
 public:
  Pokemon(std::string name, std::string type, int HP, int attack, int defense,
          std::string moves[4]);
  std::string getName();
  std::string getType();
  int getHP();
  int getAttack();
  int getDefense();
  std::string getMove(int i);
  void setName(std::string name);
  void setType(std::string type);
  void setHP(int HP);
  void setAttack(int attack);
  void setDefense(int defense);
  void setMove(int i, std::string move);

 private:
  std::string name;
  std::string type;
  int HP;
  int attack;
  int defense;
  std::string moves[4];
};

#endif
