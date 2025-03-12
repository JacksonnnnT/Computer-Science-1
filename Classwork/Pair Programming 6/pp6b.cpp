/**
 * File: pp6b.cpp 
 * Author: Jackson  
 * This file reads account balances from a .dat file. 
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main() {
    char accountNumber[14]; // Account number.
    double accountBalance; // Account balance.
    ifstream input; // Access to the input file.
    string inputFilename = "pp6b.dat"; // Name of the input file.

    input.open( inputFilename );
    if(input.fail()) {
        cout << "File name: " << inputFilename << "does not exist.";
    } else {

        // Build the table:
        cout << setw(15) << left << "Account Number";
        cout << setw(9) << right << "Balance" << "\n";
        cout << "------------------------------------" << "\n";

        while(!input.eof()) { // Wait for end of file.

            input >> accountNumber;
            input >> accountBalance;

            // Add table entries:
            cout << setw(15) << left << accountNumber;

            cout << '$'; // $ character for balance.

            cout << setw(9) << setprecision(2) << right << showpoint << fixed << accountBalance << endl;
        }
    }


}