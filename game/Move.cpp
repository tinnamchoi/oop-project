#include "Move.h"

Move::Move() {
  name = "Tackle";
  type = "Normal";
  power = 40;
}
Move::Move(std::string name, std::string type, int power) {
  this->name = name;
  this->type = type;
  this->power = power;
}
std::string Move::getName() { return name; }
std::string Move::getType() { return type; }
int Move::getPower() { return power; }
void Move::setName(std::string name) { this->name = name; }
void Move::setType(std::string type) { this->type = type; }
void Move::setPower(int power) { this->power = power; }
