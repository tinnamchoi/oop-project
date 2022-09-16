#include "Pokemon.h"

Pokemon::Pokemon(std::string name, int level, int hp, int attack, int defense,
                 std::string type, std::string s_attack, std::string s_defense,
                 int speed) {
  this->name = name;
  this->level = level;
  this->hp = hp;
  this->attack = attack;
  this->defense = defense;
  this->type = type;
  this->s_attack = s_attack;
  this->s_defense = s_defense;
  this->speed = speed;
}
std::string Pokemon::getName() { return name; }
int Pokemon::getLevel() { return level; }
int Pokemon::getHP() { return hp; }
int Pokemon::getAttack() { return attack; }
int Pokemon::getDefense() { return defense; }
std::string Pokemon::getType() { return type; }
std::string Pokemon::getS_Attack() { return s_attack; }
std::string Pokemon::getS_Defense() { return s_defense; }
int Pokemon::getSpeed() { return speed; }
void Pokemon::setName(std::string name) { this->name = name; }
void Pokemon::setLevel(int level) { this->level = level; }
void Pokemon::setHP(int hp) { this->hp = hp; }
void Pokemon::setAttack(int attack) { this->attack = attack; }
void Pokemon::setDefense(int defense) { this->defense = defense; }
void Pokemon::setType(std::string type) { this->type = type; }
void Pokemon::setS_Attack(std::string s_attack) { this->s_attack = s_attack; }
void Pokemon::setS_Defense(std::string s_defense) {
  this->s_defense = s_defense;
}
void Pokemon::setSpeed(int speed) { this->speed = speed; }
