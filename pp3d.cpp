/*
File: pp3d.cpp
Author: Jackson T. Napier
This program allows the user to "order" a certain type of flooring. 
*/

#include <iostream>
using namespace std;

int main() {
    char choice; // The user's choice for flooring.

    // Print and ask user for input.
    cout << "H - Hardwood\nL - Laminate\nE - Engineered Hardwood\nQ - Quit\nChoice: ";
    cin >> choice;    

    do {
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
        break;
        default: 
        cout << "Invalid choice: " << choice << endl;
        }
        // Keep printing and asking for types of flooring.
        cout << "H - Hardwood\nL - Laminate\nE - Engineered Hardwood\nQ - Quit\nChoice: ";
         cin >> choice;    


        

    } while (choice != 'Q'); // While the user's choice does not equal the terminating value 'Q'.

return 0;
}