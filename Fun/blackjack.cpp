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
using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::srand;

// Global Declarations

int min = 1, max = 21;

int main() {

    // Necessary game functions:
    srand(time(0)); // Seeds the random number generator.
    int randomNumber = min + rand() % (max - min + 1);

    int blackjack = 21;
    char userMove;
    char wishToPlay;
    int dealerCards;
    int playerCards;

    // Print welcome and ask if they wish to play.
    cout << "Welcome to blackjack, do you want to play? ";
    cin >> wishToPlay; // Get user input.

    if(wishToPlay == 'y') { // Verify the character.
        randomNumber = min + rand() % (max - min + 1); // Get a random number.
        dealerCards = randomNumber; // Assign to the variable.
        playerCards = randomNumber;
        // Print the cards and ask for the user's next move.
        cout << "Your first card is a: " << playerCards  << "\n The Dealer's first card is a: " << dealerCards  << "\n What is your first move (H) Hit or (S) Stand? ";
        cin >> userMove;   

        // Check if the user decided to hit.
        // todo: Make a stand check, and return all other characters if characters do not = h or s.
        if(userMove == 'h') {
            randomNumber = min + rand() % (max - min + 1);
            playerCards = playerCards + randomNumber;
            dealerCards = dealerCards;
            if(playerCards > 21) { // If player cards are over 21. Could probably make a function that checks this.
                cout << "You busted!";
            } else {
                cout << "Your second card is a: " << playerCards << "The dealer's card's are: " << dealerCards << "\n What is your next move? (H) Hit or (S) stand? "; 
            }
        } 

    } else {
        return 0;
    }
    

}

