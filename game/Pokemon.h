#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
 public:
  Pokemon(std::string name, int level, int hp, int attack, int defense,
          std::string type, std::string s_attack, std::string s_defense,
          int speed);
  std::string getName();
  int getLevel();
  int getHP();
  int getAttack();
  int getDefense();
  std::string getType();
  std::string getS_Attack();
  std::string getS_Defense();
  int getSpeed();
  void setName(std::string name);
  void setLevel(int level);
  void setHP(int hp);
  void setAttack(int attack);
  void setDefense(int defense);
  void setType(std::string type);
  void setS_Attack(std::string s_attack);
  void setS_Defense(std::string s_defense);
  void setSpeed(int speed);

 private:
  std::string name;
  int level;
  int hp;
  int attack;
  int defense;
  std::string type;
  std::string s_attack;
  std::string s_defense;
  int speed;
};

#endif
