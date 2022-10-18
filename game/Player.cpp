#include "Player.h"

using namespace std;

bool Player::swapPokemon(int newPokemon) {
  // Check health of new pokemon
  if (pokemon[newPokemon].health <= 0) {
    cout << "You cannot swap to a fainted pokemon!" << endl;
    return false;
  }
  currentPokemon = newPokemon;
  cout << name << "'s " << pokemon[currentPokemon].getName()
       << " is now in battle!" << endl;
  return true;
}
