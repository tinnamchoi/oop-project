#ifndef POKEMON3_H
#define POKEMON3_H
#include <iostream>

class Pokemon3 {
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