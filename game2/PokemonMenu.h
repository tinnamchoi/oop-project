#ifndef POKEMONMENU_H
#define POKEMONMENU_H

#include "Menu.h"
#include "Player.h"

class PokemonMenu : public Menu, public Player {
 public:
  PokemonMenu();
  Pokemon pokemon[6];
};

#endif
