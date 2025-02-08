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
    int chips = 500;
    int bet;

    // Print welcome and ask if they wish to play.
    cout << "Welcome to blackjack, do you want to play? ";
    cin >> wishToPlay; // Get user input.
   

    if(wishToPlay == 'y') { // Verify the character.
         cout << "You were gifted " << chips << " chips from the developers to have fun with!\n";
        randomNumber = min + rand() % (max - min + 1); // Get a random number.
        dealerCards = randomNumber; // Assign to the variable.
        playerCards = randomNumber;

        // Ask the user for a bet.
        cout << "You need to bet before we get started. You can bet up to " << chips << " amount: ";
        cin >> bet;
        
        // Check if bet does not exceed user's chipset amount.
        if (bet > chips) {
            cout << "You can't bet more than you have already.";
            exit(true);
        }

        // Print the cards and ask for the user's next move.
        cout << "You bet " << bet << " chips" << "\nYour first card is a: " << playerCards  << "\n The Dealer's first card is a: " << dealerCards  << "\n What is your first move (H) Hit or (S) Stand? ";
        cin >> userMove;   

        // Check if the user decided to hit.
        // todo: Make a stand check, and return all other characters if characters do not = h or s.
        if(userMove == 'h' or "H") {
            randomNumber = min + rand() % (max - min + 1);
            playerCards = playerCards + randomNumber;
            dealerCards = dealerCards;
    
            if(playerCards > 21) { // If player cards are over 21. Could probably make a function that checks this.
                cout << "You busted! You went over 21! Your card total was " << playerCards;
                exit(true);
            } else {
                cout << "Your second card is a: " << playerCards << "The dealer's card's are: " << dealerCards << "\n What is your next move? (H) Hit or (S) stand? ";
                cin >> userMove; 
            }
        } 


        if(userMove == 's' or "S") {
            randomNumber = min + rand() % (max - min + 1);
            playerCards = playerCards;
            dealerCards = dealerCards + randomNumber;

            if(dealerCards > 21) {
                cout << "Dealer went over 21! The card total for the dealer was " << dealerCards << " you win!";
            } else {
                cout << "The dealer's second card total is a: " << dealerCards << "\n What is your next move? Hit (H) or Stand (S)";
                cin >> userMove;
            } 
        }


        

    } else {
        cout << "Invalid character was entered, you entered: " << userMove << " womp womp!";
        return 0;
    }
    

}

