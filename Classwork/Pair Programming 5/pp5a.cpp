/*
Jackson
pp5a.cpp
This program takes two integers and swaps them.
*/
#include <iostream>
using namespace std;

void mySwap(int&, int&);

int main() {
  int number1, number2;
  cout << "Enter the first number: ";
  cin >> number1;
  cout << "Enter the second number: ";
  cin >> number2;

  mySwap(number1, number2);
  cout << "First number: " << number1 << "\n" << "Second number: " << number2 << endl; 

}

/**
* mySwap
* This program has two parameters all of type int: number1 and number2.
* This program swaps the two numbers.
* Returns: The swapped numbers.
*/

void mySwap(int& number1, int& number2) {
   int number = number1;
   number1 = number2;
   number2 = number;
}
