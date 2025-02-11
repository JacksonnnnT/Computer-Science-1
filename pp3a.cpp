/*
File: pp3a.cpp
Author: Jackson T. Napier
This file can calculate the salary  of multiple employees unless terminated.
*/
#include <iostream>
using namespace std;

int main() {
  double hours, rate; // User input variables, ask for the hours worked, and their payrate.
  double salary; // The salary to be calculated by the program.

  // Print welcome and ask for hours.
  cout << "Enter hours (0 to end): ";
  cin >> hours;

  while(hours > 0) { // Hours must be greater than 0. Terminate when a user enters 0 or any negative value.
  cout << "What is your base pay? "; // Ask user for their payrate.
  cin >> rate; // Get their pay.
  
  if(hours > 40) {
  salary = rate * 40 + (hours - 40) * rate * 1.5;
  cout << "Salary is $" << salary << endl;
  cout << "Enter hours (0 to end): "; // Keep asking user for hours.
  cin >> hours;
 } else {
  salary = hours * rate;
  cout << "Salary is $" << salary << endl;
  cout << "Enter hours (0 to end): ";
  cin >> hours;
}
 
}

return 0; // Otherwise if none of the conditions are met, return nothing.
  


}

