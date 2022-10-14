#ifndef MENU_H
#define MENU_H
#include <iostream>

class Menu {
    protected:
        std::string title;
        options; // not sure how to do vectors :P

    public:
        // Printer
        void printMenu();

        // Setters
        void setTitle();
        void setOptions();
};

#endif