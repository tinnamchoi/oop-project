#include "Player.h"
#include "Computer.h"

#include <time.h>

Computer::Computer() {
    //not sure if there is anything to include in here
}

void Computer::move() {
    srand (time(NULL)); //randomises based on time
    int random = (rand() % 3) + 1; //creates a variable that randomises to output values from 1-3
                                   //there are 3 moves as of current - attack, defence, special attack
    switch(random) {
        case 1:
            move = 'a'; //a for attack
            break;
        case 2:
            move = 'd'; //d for defence
            break;
        case 3: 
            move = 's'; //s for special attack
            break;
        default:
            move = 'a'; //make attack the default move
            break;
    }
}