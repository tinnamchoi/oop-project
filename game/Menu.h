#ifndef MENU_H
#define MENU_H

#include <string>

class Menu {
 public:
  Menu(std::string title, std::string options[], int numOptions);
  std::string getTitle();
  std::string getOption(int index);
  int getNumOptions();
  void setTitle(std::string title);
  void setOption(int index, std::string option);
  void setNumOptions(int numOptions);
  void printOptions();

 private:
  std::string title;
  std::string options[10];
  int numOptions;
};

#endif
