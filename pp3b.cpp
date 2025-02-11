/*
File: pp3b.cpp
Author: Jackson T. Napier
This file takes the powers of 2 and returns them.
*/

// Include necessary namespaces and files.
#include <iostream>
using namespace std;

int main() {

 int n;

 // Print welcome and ask for input.
 cout << "Enter n: ";
 cin >> n;

 int power = 1; // Start at 1.

 for (int i = 0; i <= n; i++) { // Loop if i less than n and increment.
 cout << i << "\t" << power << endl;
 power *= 2;
}

return 0;
}

