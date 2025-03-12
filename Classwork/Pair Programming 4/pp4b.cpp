/*
Author: Jackson
File: pp4b.cpp
This file takes the square of a number.
*/

#include <iostream>
using namespace std;



/**
* squareAndPrint
* This function has no parameters.
* This function asks a user for a number to square and prints the result.
*/

int squareAndPrint() {
 double number;
 double result;

 // Print and ask for input.
 cout << "Enter a number? ";
 cin >> number;

 // Calculate the result.
 result = number * number;
 cout.precision(2);
 cout << fixed << fixed;
 cout.precision(2);
 cout << number << " squared " << "is " <<  result << endl;
 return 0;
}


int main() {
 squareAndPrint();
 return 0;
}
