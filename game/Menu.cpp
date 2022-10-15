#include "Menu.h"

Menu::Menu() {
  title = "Default Title";
  options.push_back("Option 1");
  options.push_back("Option 2");
  options.push_back("Option 3");
}
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
std::vector<std::string> Menu::getOptions() { return options; }
