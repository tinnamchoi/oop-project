#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
 public:
  Pokemon(std::string name, std::string type);
  std::string getName();
  std::string getType();
  void setName(std::string name);
  void setType(std::string type);

 private:
  std::string name;
  std::string type;
};

#endif
