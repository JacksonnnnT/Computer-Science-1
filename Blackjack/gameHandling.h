/**
 * Game handling for blackjack. 
*/
#ifndef GAME_HANDLING_H
#define GAME_HANDLING_H

// Include necessary modules.
#include "blackjackCodes.h"
#include <iostream>
using std::cout;



int checkBlackjack() {
    if(PLAYER_BLACKJACK) {
        cout << "You got blackjack!";
        return PLAYER_BLACKJACK;
    }
    if(DEALER_BLACKJACK) {
        cout << "The dealer got blackjack.";
        return DEALER_BLACKJACK;
    }
    return 0;
}

int checkBust() {
    if(DEALER_BUST) {
        cout << "The dealer went over 21.";
    }
    if(PLAYER_BUST) {
        cout << "The player went over 21.";
    }
    return 0;
}






#endif