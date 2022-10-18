#include <stdlib.h>
#include <time.h>

#include "Computer.h"

int main() {
  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    Computer computer(i);
    computer.printPokemon();
  }
}
