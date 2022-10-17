#include "Menu.h"

int main() {
  // Create a Menu object
  Menu menu("Main Menu", {"Play", "Quit", "Test", "Test2", "Test3", "Test4"});
  int choice = menu.getChoice();
  cout << "You chose: " << choice << endl;
  
  return 0;
}