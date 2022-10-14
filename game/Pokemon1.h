#ifndef POKEMON1_H
#define POKEMON1_H
#include <iostream>

class Pokemon1 {
    protected:
        std::string name;
        type; // not sure what data type to use
        int level;
        int attack;
        int specialAttack;
        int defense;
        movesLearnt; // not sure what data type to use

    public:

        // Functions
        void levelUp();
        void addMove();
        void removeMove();
};

#endif