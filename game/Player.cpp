#include "Player.h"

Player::Player() {}
void Player::printPokemon() {
  for (int i = 0; i < 3; i++) {
    pokemon[i].printStats(name);
  }
}