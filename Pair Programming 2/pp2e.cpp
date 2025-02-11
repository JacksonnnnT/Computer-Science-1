/*
File: pp2e.cpp 
Author: Jackson Napier
This program asks if you're married and returns if you enter married or single.
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() { 
    char marriageStatus;

    // > Ask user for input:
    cout << "Are you married (M) or single (S)? ";
    cin >> marriageStatus;
    
    // Make a switch statement, and include lower case letters.
    switch(marriageStatus) {
        case 'M':
        case 'm':
        cout << "You entered married." << endl;
        break;
        case 'S':
        case 's':
        cout << "You entered single." << endl;
        break;
        default:
        cout << "An invalid status has been provided." << endl;
        break;
    }
    return 0;

}