/*
Jackson
pp5b.cpp
This file takes a double and prints it's attributes.
*/
#include <iostream>
using namespace std;

void figureIt(double number, bool& divisible, char& sign, int& intPart);



int main() {
    double number;
    bool divisible;
    char sign;
    int intPart;

    do {
        cout << "Enter x: ";
        cin >> number;
        figureIt(number, divisible, sign, intPart);
        cout << number << ": " << (divisible ? "not even" : "even") << ", " << sign << ", " << intPart << "\n";

    } while(number != 0);
}

/**
* figureIt
* This function asks for a double and prints the attributes of that number.
* Parameters: 
* number - The floating point number we are going to check.
* divisible - A boolean, to check and see if the number is divisible by 2.
* sign - A char, to see if the number is positive.
* intPart - The integer part of the number rounded.
* Returns type void.
*/

void figureIt(double number, bool& divisible, char& sign, int& intPart) {
  int checkEven = (static_cast<int>(number) % 2);
  if(checkEven) {
    divisible = true;
  } else {
    divisible = false;
  }
if(number < 0.00) {
 sign = '-';
} else {
 sign = '+';
}

intPart = (number >= 0) ? static_cast<int>(number + 0.5) : static_cast<int>(number - 0.5);

}



