#include "Player.h"

using namespace std;

int main() {
  Player player;
  player.name = "Ash";
  player.pokemon[0].newPokemon(0);
  player.pokemon[1].newPokemon(1);
  player.pokemon[2].newPokemon(2);
  player.printPokemon();
}
