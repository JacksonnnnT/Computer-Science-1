/*
Name: Jackson
File: pp4a.cpp
This file pulls a random card from a standard 52 card deck.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

 // Deck
 const int ACE = 1;
 const int TWO = 2;
 const int THREE = 3;
 const int FOUR = 4;
 const int FIVE = 5;
 const int SIX = 6;
 const int SEVEN = 7;
 const int EIGHT = 8;
 const int NINE = 9;
 const int TEN = 10;
 const int KING = 11;
 const int JACK = 12;
 const int QUEEN = 13;

 // Suites:
 const int CLUBS = 0;
 const int SPADES = 1;
 const int HEARTS = 2;
 const int DIAMONDS = 3;

 int randomCard;
 int randomSuite;

 // Seed the random generator once.
 srand(time(0));

 // Ge the random cards and suites.
 randomCard = rand() % 13 + 1;
 randomSuite = rand() % 4;

 switch(randomCard) {

  case ACE: cout << "Ace of ";
  break;
  case TWO: cout << "Two of ";
  break;
  case THREE: cout << "Three of ";
  break;
  case FOUR: cout << "Four of ";
  break;
  case FIVE: cout << "Five of ";
  break;
  case SIX: cout << "Six of ";
  break;
  case SEVEN: cout << "Seven of ";
  break;
  case EIGHT: cout << "Eight of ";
  break;
  case NINE: cout << "Nine of ";
  break;
  case TEN: cout << "Ten of ";
  break;
  case KING: cout << "King of ";
  break;
  case JACK: cout << "Jack of ";
  break;
  case QUEEN: cout << "Queen of ";
  break;
}

 switch(randomSuite) {
  case CLUBS: cout << "Clubs" << endl;
  break;
  case SPADES: cout << "Spades" << endl;
  break;
  case HEARTS: cout << "Hearts" << endl;
  break;
  case DIAMONDS: cout << "Diamonds" << endl;
  break;
 


}

return 0;
 

}
