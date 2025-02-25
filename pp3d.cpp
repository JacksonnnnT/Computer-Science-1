/*
File: pp3d.cpp
Author: Jackson T. Napier
This program allows the user to "order" a certain type of flooring. 
*/

#include <iostream>
using namespace std;

int main() {
    char choice; // The user's choice for flooring.


    do {
       // Print and ask user for input.
        cout << "H - Hardwood\nL - Laminate\nE - Engineered Hardwood\nQ - Quit\nChoice: ";
        cin >> choice;    

        switch(choice) { // Switch case for each choice.
        case 'H':
        case 'h':
        cout << "You ordered hardwood." << endl;
        break;
        case 'L':
        case 'l':
        cout << "You ordered laminate." << endl;
        break;
        case 'E':
        case 'e':
        cout << "You ordered Engineered Hardwood." << endl;
        case 'Q':
        case 'q':
        break;
        default:
        cout << "Invalid character provided, you entered: " << choice << "\n";
        break;
        }
    } while (choice != 'Q' && choice != 'q'); // While the user's choice does not equal the terminating value 'Q'.
    return 0;
}