#include "Player.h"

Player::Player() {
    pokemon[0] = "Pokemon 1";
    pokemon[1] = "Pokemon 2";
    pokemon[2] = "Pokemon 3";
    pokemon[3] = "Pokemon 4";
    pokemon[4] = "Pokemon 5";
    pokemon[5] = "Pokemon 6";

    recentMove = 'a'; //currently define 'a' for attack
    score = 0;
}

char Player::getMove() { //return the move made
    return recentMove;
}

int Player::win(Player * opponent) { //polymorphism
    char recent = recentMove; //take the move
    char op = opponent->getMove();

    //create an if statement to determine scores based on move made - return the score
    //score is calculated based on type and chosen move
    if (recent == 'a') { //if user attacks
        if (op == 'a') { //if cmp also attacks
            //calculate difference in attack hp
        } 
        else if (op == 'd') { //if cmp defends
            //calculate difference in attack and defense hp
        } 
        else { //cmp special attack
            //calculate difference in attack and special attack hp
        }
    }

    else if (recent == 'd') { //if user defends
        if (op == 'a') {
            //calculate difference in attack hp
        } 
        else if (op == 'd') { //cmp defends
            //calculate difference in attack and defense hp
        }
        else { //cmp special attack
            //calculate difference in attack and special attack hp
        }
    }

    else { //user special attacks
    if (op == 'a') {
        //calculate difference in attack hp
    }
    else if (op == 'd') { //cmp defends
        //calculate difference in attack and defense hp
    }
    else { //op special attacks
        //calculate difference in attack and special attack hp
    }
}
