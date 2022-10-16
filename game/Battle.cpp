#include "Battle.h"

Battle::Battle(Player *player, Computer *computer) {
  this->player = player;
  this->computer = computer;
}
int Battle::winState() {
  if (player->pokemon[0].health <= 0 && player->pokemon[1].health <= 0 &&
      player->pokemon[2].health <= 0) {
    std::cout << "You lose!" << std::endl;
    return 1;
  }
  if (computer->pokemon[0].health <= 0 && computer->pokemon[1].health <= 0 &&
      computer->pokemon[2].health <= 0) {
    std::cout << "You win!" << std::endl;
    return 2;
  }
  return 0;
}
void Battle::printInfo() {
  std::cout << std::endl << "Player's Pokemon:" << std::endl;
  for (int i = 0; i < 3; i++) {
    std::cout << player->pokemon[i].name << " " << player->pokemon[i].health
              << std::endl;
  }
  std::cout << std::endl << "Computer's Pokemon:" << std::endl;
  for (int i = 0; i < 3; i++) {
    std::cout << computer->pokemon[i].name << " " << computer->pokemon[i].health
              << std::endl;
  }
}