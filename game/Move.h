#ifndef ATTACK_H
#define ATTACK_H

#include <string>

class Move {
 public:
  Move();
  Move(std::string name, std::string type, int power);
  std::string getName();
  std::string getType();
  int getPower();
  void setName(std::string name);
  void setType(std::string type);
  void setPower(int power);

 private:
  std::string name;
  std::string type;
  int power;
};

#endif
