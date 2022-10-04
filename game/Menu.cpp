#include "Menu.h"

#include <iostream>

using namespace std;

Menu::Menu() {}
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

/* Menu format 

== Title ==
-----------------------------
| 1. Option 1 | 2. Option 2 |
| 3. Option 3 | 4. Option 4 |
-----------------------------

*/

void Menu::printMenu() {
  cout << "== " << title << " ==" << endl;
  cout << "-----------------------------" << endl;
  for (int i = 0; i < numOptions; i++) {
    if (i % 2 == 0) {
      cout << "| ";
    }
    cout << i + 1 << ". " << options[i];
    if (i % 2 == 1) {
      cout << " |" << endl;
    } else {
      cout << " | ";
    }
  }
  cout << "-----------------------------" << endl;
}
