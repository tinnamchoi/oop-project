#include "Pokemon.h"

#include <string>

Pokemon::Pokemon(std::string name, std::string type, int HP, int attack,
                 int defense, std::string moves[4]) {
  this->name = name;
  this->type = type;
  this->HP = HP;
  this->attack = attack;
  this->defense = defense;
  for (int i = 0; i < 4; i++) {
    this->moves[i] = moves[i];
  }
}
std::string Pokemon::getName() { return name; }
std::string Pokemon::getType() { return type; }
int Pokemon::getHP() { return HP; }
int Pokemon::getAttack() { return attack; }
int Pokemon::getDefense() { return defense; }
std::string Pokemon::getMove(int i) { return moves[i]; }
void Pokemon::setName(std::string name) { this->name = name; }
void Pokemon::setType(std::string type) { this->type = type; }
void Pokemon::setHP(int HP) { this->HP = HP; }
void Pokemon::setAttack(int attack) { this->attack = attack; }
void Pokemon::setDefense(int defense) { this->defense = defense; }
void Pokemon::setMove(int i, std::string move) { this->moves[i] = move; }
