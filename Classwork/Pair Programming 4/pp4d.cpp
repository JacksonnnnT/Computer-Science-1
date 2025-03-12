/*
Jackson
File: pp4d.cpp
This file takes the cube of a number.
*/
#include <iostream>
using namespace std;

/**
* cube
* This function has one parameter, a number that the user will enter.
* This function takes the cube of a number that the user enters. 
* This returns the cube of that number. 
*/

double cube(double number) {

 double result;

 // Calculate the result.
 result = number * number * number;

 return result; 
}

int main() {
    double number, result;
    while(number != 0) {

        cout << "Enter a number (0 to end): ";
        cin >> number;

        if(number == 0) {
            return 0;
        } else {

        result = cube(number);
        cout.precision(3);
        cout << fixed << fixed;
        cout.precision(3);
        cout << "The cube of " << number << " is " <<  result << endl;
        }
    }
}


