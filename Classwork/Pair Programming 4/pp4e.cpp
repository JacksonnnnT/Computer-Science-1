/*
Author: Jackson 
File: pp4e.cpp
This file checks to see if a number is negative or positive. 
*/

#include <iostream>
using namespace std;

/**
* isPositive
* This function has one parameter, a number that the user will enter.
* This function verifies if a number is positive or negative. 
*/

int isPositive(int number) {
    bool isPositive;

 // Check if the number is positive.
 if(number >= 0) {
    isPositive = true;
 } else {
    isPositive = false;
 }
 return isPositive;
}

int main() {
    int number;

    while (number != 0) {
        cout << "Enter number (0 to end): ";
        cin >> number;
        if(isPositive(number)) {
           cout << number << " is positive\n";
        } else {
            cout << number << " is negative\n";
        }

    }
  return 0;  
}