#ifndef MENU_H
#define MENU_H

#include <string>

class Menu {
 public:
  Menu();
  Menu(std::string title, std::string options[], int numOptions);
  std::string getTitle();
  std::string getOption(int index);
  int getNumOptions();
  void setTitle(std::string title);
  void setOption(int index, std::string option);
  void setNumOptions(int numOptions);
  void printMenu();

 private:
  std::string title = "Default Menu";
  std::string options[4] = {"Attack", "Bag", "Pokemon", "Run"};
  int numOptions = 4;
};

#endif
