/*
File: pp2b.cpp
Author: Jackson  
This program can tell you what benefits you get based on your age. 
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

    int age;

    // Ask the user for their age.
    cout << "What is your age? ";
    cin >> age;

    // Print users benefits based on their age. Put in descending order 
    if(age >= 65) {
        cout << "You can collect social security." << endl;
    } else if(age >= 25) {
        cout << "You can rent a car." << endl; 
    } else if(age >= 21) {
        cout << "You can drink." << endl;
    } else if(age >= 18) {
        cout << "You can vote." << endl;
    } else {
        return 0;
    }
    return 0;
}