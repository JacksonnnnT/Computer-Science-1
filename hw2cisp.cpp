/**
 * @file hw2cisp.cpp
 * @author Jackson T. Napier
 * @date 1/29/2025
 * @details This file will compute miles per gallon using the formula miles/gallons provided from input of user.
 * 
 * @test #1: Check to see what 20 miles and 18 gallons converts to. 
 * @result = 1.11111
 * 
 * @test #2: Check error handling by intentionally setting both miles and gallons = 0.
 *  @result = Error handling works. 
 * 
 * @test #3: Check individual error handling by intentionally setting 0 to miles, and setting 10 to gallons.
 * @result - Error handling works.
 * 
*/
#include <iostream>
using namespace std;

int main() {
 
 // Assign variables all of type double (float numbers).
 double gallons, miles, conversion, result;
 cout << "Enter number of miles: ";
 cin >> miles;
 cout << "Enter number of gallons: ";
 cin >> gallons;

 // -> Error handling:
 if(gallons <= 0) {
    std::cout << "A logic error has occured, gallons is less than or equal to 0." << endl;
 } else if(miles <= 0) {
    std::cout << "A logic error has occured, miles is less than or equal to 0." << endl;
  } else {

 // -> Otherwise get the result:
 result = miles/gallons;

 // Print the result and end the process.
 cout << "You have " << result << " miles per gallon" << endl;

 }
}