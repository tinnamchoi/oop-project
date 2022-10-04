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
  std::string title = "Menu title";
  std::string options[4] = {"Option 1", "Option 2", "Option 3", "Option 4"};
  int numOptions = 4;
};

#endif
