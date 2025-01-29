/**
 * @file hw1cisp.cpp
 * @author Jackson T. Napier
 * @date 1/29/2025
 * @details This file asks a user for the amount of cents they have, and will spit out an answer when added. 
*/

#include <iostream>
// -> Bad practice but we will use this because that's all we're using for this assignment, never do this in a real world scenario:
using namespace std;

int main() {

    // -> Assign variables for this problem.
    int quarters, dimes, nickels, pennies, numberOfCents, cents;

    // -> Get the user's input & assign that input to variables:
    cout << "Enter number of quarters you have: ";
    cin >> quarters;
    cout << "Enter number of dimes you have: ";
    cin >> dimes;
    cout << "Enter number of nickels you have: ";
    cin >> nickels;
    cout << "Enter the number of pennies you have: ";
    cin >> pennies;


    // -> Get the sum of all of those added together.
    cents = quarters*25 + dimes*10 + nickels*5 + pennies*1;
    numberOfCents = cents;

    cout << "You have " << numberOfCents << "cents" << endl; 


}