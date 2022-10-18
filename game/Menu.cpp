#include "Menu.h"

#include <limits>

Menu::Menu(std::string title, std::vector<std::string> options) {
  this->title = title;
  this->options = options;
}
bool Menu::printMenu() {
  std::cout << std::endl << title << std::endl;
  // print all options
  for (int i = 0; i < (int)options.size(); i++) {
    std::cout << i + 1 << ". " << options[i] << std::endl;
  }
  return true;
}
int Menu::getChoice() {
  int choice;
  while (this->printMenu() && !(std::cin >> choice)) {
    std::cin.clear();  // clear bad input flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                    '\n');  // discard input
    std::cout << "Invalid input; please re-enter.\n";
  }
  return choice;
}
