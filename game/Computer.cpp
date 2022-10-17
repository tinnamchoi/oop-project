#include "Computer.h"
#include <stdlib.h>
#include "Pokemon.h"

Computer::Computer(int landmark) {
  name = names[landmark];
  switch (landmark) {
    case 0:
      pokemon[0].newPokemon(rand() % 6);
      pokemon[1].newPokemon(rand() % 6);
      pokemon[2].newPokemon(rand() % 6);
      break;
    case 1 ... 9:
      pokemon[0].newPokemon(rand() % 6);
      pokemon[1].newPokemon(rand() % 6);
      pokemon[2].newPokemon(rand() % 6);
      break;
  }
}
