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

============== Title ==============
-----------------------------------
| 1. Option 1    | 2. Option 2    |
| 3. Option 3    | 4. Option 4    |
-----------------------------------

Automatically pad length of options to 16 characters each
*/


void Menu::printMenu() {
  // Print title
  // calculate number of equal signs needed
  // subtract 2 and title length from 35, divide by 2
  int numEquals = (35 - 2 - title.length()) / 2;
  for (int i = 0; i < numEquals; i++) {
    cout << "=";
  }
  cout << " " << title << " ";
  for (int i = 0; i < numEquals; i++) {
    cout << "=";
  }
  // if title length is even, add an extra equal sign
  if (title.length() % 2 == 0) {
    cout << "=";
  }
  cout << endl;
  // Print options
  // Print top line of options
  cout << "-----------------------------------" << endl;
  // Print options
  for (int i = 0; i < numOptions; i++) {
    cout << "| " << i + 1 << ". " << options[i];
    // Pad options to 16 characters
    for (int j = 0; j < 16 - options[i].length() - 4; j++) {
      cout << " ";
    }
    // Print second column of options
    if (i % 2 == 1) {
      cout << "|" << endl;
    }
  }
  // Print bottom line of options
  cout << "-----------------------------------" << endl;
}
