/*
Author: Jackson T. Napier
File: pp3b.cpp
This file calculates factorials.
*/

#include <iostream>
using namespace std;


int main() { 

 // User variable.
 int number; 

 // Print and ask for input:
 cout << "Enter n: ";
 cin >> number;

 // Result.
 double result = 1;

 for (int i = 1; i <= number; i++) { // Loop and increment
 result *= i; // Update the result.
 } 

 // Print the result.
 cout << number << "! " << "is " << fixed;
 cout.precision(0); // Handle large integers.
 cout << result << endl;

 return 0;

}