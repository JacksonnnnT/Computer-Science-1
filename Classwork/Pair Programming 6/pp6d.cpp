/*
File: pp6d.cpp
Author: Jackson

*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    ch = cin.get();  // Read one character using get()

    // Check and print messages for each condition
    if (isupper(ch)) {
        cout << "The character is uppercase" << endl;
    }
    if (islower(ch)) {
        cout << "The character is lowercase" << endl;
    }
    if (isdigit(ch)) {
        cout << "The character is a digit" << endl;
    }
    if (isspace(ch)) {
        cout << "The character is white space" << endl;
    }
    if (isalpha(ch)) {
        cout << "The character is alphabetic" << endl;
    }

    return 0;
}

