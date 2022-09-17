#ifndef POKEMON_H
#define POKEMON_H

#include <string>

#include "Move.h"

class Pokemon {
 public:
  Pokemon(std::string name, std::string type, int HP, int attack, int defense,
          Move moves[4]);
  std::string getName();
  std::string getType();
  int getHP();
  int getAttack();
  int getDefense();
  Move getMove(int i);
  void setName(std::string name);
  void setType(std::string type);
  void setHP(int HP);
  void setAttack(int attack);
  void setDefense(int defense);
  void setMove(int i, Move move);

 private:
  std::string name;
  std::string type;
  int HP;
  int attack;
  int defense;
  Move moves[4];
};

#endif
