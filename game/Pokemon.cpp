#include "Pokemon.h"

Pokemon::Pokemon(std::string name, std::string type) {
  this->name = name;
  this->type = type;
}
std::string Pokemon::getName() { return name; }
std::string Pokemon::getType() { return type; }
void Pokemon::setName(std::string name) { this->name = name; }
void Pokemon::setType(std::string type) { this->type = type; }
