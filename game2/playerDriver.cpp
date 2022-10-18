#include "Player.h"

using namespace std;

int main() {
  Player player;
  player.name = "Ash";
  player.pokemon.push_back(Pokemon());
  player.pokemon[0].newPokemon(0);
  player.pokemon.push_back(Pokemon());
  player.pokemon[1].newPokemon(1);
  player.pokemon.push_back(Pokemon());
  player.pokemon[2].newPokemon(2);
  player.pokemon.push_back(Pokemon());
  player.pokemon[3].newPokemon(3);
  player.pokemon.push_back(Pokemon());
  player.pokemon[4].newPokemon(4);
  player.pokemon.push_back(Pokemon());
  player.pokemon[5].newPokemon(5);
  player.printPokemon();
}
