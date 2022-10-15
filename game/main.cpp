#include <iostream>

#include "Person.h"

int main() {
  Person player;
  std::cout << player.getName() << std::endl;
  player.setName("John");
  std::cout << player.getName() << std::endl;
}
