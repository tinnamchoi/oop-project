#include "Menu.h"

#include <iostream>

using namespace std;

Menu::Menu(std::string title, std::string options[], int numOptions) {
  this->title = title;
  for (int i = 0; i < numOptions; i++) {
    this->options[i] = options[i];
  }
  this->numOptions = numOptions;
}
std::string Menu::getTitle() { return title; }
std::string Menu::getOption(int index) { return options[index]; }
int Menu::getNumOptions() { return numOptions; }
void Menu::setTitle(std::string title) { this->title = title; }
void Menu::setOption(int index, std::string option) { options[index] = option; }
void Menu::setNumOptions(int numOptions) { this->numOptions = numOptions; }
void Menu::printOptions() {
  std::cout << title << std::endl;
  for (int i = 0; i < numOptions; i++) {
    std::cout << i + 1 << ". " << options[i] << std::endl;
  }
}
