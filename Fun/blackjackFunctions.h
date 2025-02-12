// Apache 2.0 Jackson Creative.

#ifndef BLACKJACK_FUNCTIONS_H
#define BLACKJACK_FUNCTIONS_H

// Include necessary modules:
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath> // Surprise tool that'll help us later.
#include "blackjackCodes.h"
using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::srand;
using std::string;

// Seed the random generator.
const string suites[4] = { "Clubs", "Diamonds", "Hearts", "Spades" };
const int cardNumbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


int giveCardPlayer() {
 int cards = rand() % 10;
 int randCard = cardNumbers[cards];
 return randCard;
};

int giveCardDealer() {
    int cards = rand() % 10;
    int randCard = cardNumbers[cards];
    return randCard;
}

string randomSuite() {
  int randomSuites = rand() % 4;
  return suites[rand() % 4];
}

int checkBlackjack(int playerCards, int dealerCards) {
    if(playerCards == 21) {
        cout << "You got blackjack!";
    } else if(dealerCards == 21) {
        cout << "The dealer got blackjack!";
    }

    return 0;
}

int checkBust(int playerCards, int dealerCards) {
    if(playerCards > 21) {
        cout << "You busted your hand!";
    } else if(dealerCards > 21) {
        cout << "The dealer busted your hand.";
    }
    return 1;
}

#endif