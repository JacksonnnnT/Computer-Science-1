/**
 * This file tests else if statements.
*/
#include <iostream>
using std::cout;
using std::cin;


int main() { 
    int age; // Age cannot be a floating point number because you cannot be 12.5 years old.
    cout << "Enter your age: ";
    cin >> age;

    if(18 < age < 21) {
        cout << "You can vote.";
    } else if(age > 21) {
        cout << "You can drink.";
    }
}