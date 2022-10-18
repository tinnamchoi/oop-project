#include "PokemonMenu.h"

PokemonMenu::PokemonMenu() {
  for (int i = 0; i < 6; i++) {
    pokemon[i].newPokemon(i);
  }
}
