/*
Author: Jackson T. Napier
Contributor(s):  
==
==
==
==
File: blackjack.cpp
Description: This file allows a user to play blackjack.
*/

// Include necessary modules:
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath> // Surprise tool that'll help us later.
#include "blackjackFunctions.h" // Crappy functions used for blackjack that I designed.
#include "gameHandling.h"
using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::srand;
using std::string;

int main() {
    // Seed them generators:
    srand(time(0));

    char userMove;
    char wishToPlay;
    int dealerCards = 0;
    int playerCards = 0;
    int chips = 500;
    int bet;

    // Print welcome and ask if they wish to play.
    cout << "Welcome to blackjack, do you want to play? ";
    cin >> wishToPlay; // Get user input.

    // Print the first card and ask the user for their next move.
    if(wishToPlay == 'y' or 'Y') {
    int randomCardPlayer = giveCardPlayer();
    int randomCardDealer = giveCardDealer();
    cout << "Your first card is a: " << giveCardPlayer() << " of " << randomSuite() << "\nThe dealer's first card is a: " << giveCardDealer() << " of " << randomSuite() << "\nWhat is your first move? (H) Hit or (S) Stand (Terminate with Q): ";
    playerCards = playerCards += randomCardPlayer;
    dealerCards = dealerCards += randomCardDealer;
    cin >> userMove;

    do {
     
            switch(userMove) {
                case 'H':
                case 'h':
                playerCards = playerCards += randomCardPlayer;
                dealerCards = dealerCards += randomCardDealer;
                cout << "Your next card is a: " << randomCardPlayer << " of " << randomSuite() << "\nThe dealer's next card is a: " << randomCardDealer << "\nYour total cards are: " << playerCards << "\n" << "What is your next move? (H) Hit or (S) Stand (Terminate with Q): ";
                checkBlackjack(playerCards, dealerCards);
                checkBlackjack();
                checkBust(playerCards, dealerCards);
                checkBust();
                cin >> userMove;
                break;
                case 's':
                case 'S':
                cout << "You stand. The dealer's next card is a: " << randomCardDealer << randomSuite();
                break;
            }

    } while (userMove != 'Q');
    }
}

