/**
 * Jackson Napier
 * pp7e.cpp
 * This file finds an element in an array. 
*/

// Include necessary modules
#include <iostream>
using namespace std;

// Initialize functions
int  linearSearch(int array[], int n, int key);

const int VALID_ENTRIES = 8;
int numbers[8] = { 12, 1, 0, -5, 6, 8, 10, 18 };
const int NOT_FOUND = -1;



// Main function.
int main() {
    int foundIndex;
    int key;

    cout << "Enter key: ";
    cin >> key;

    foundIndex = linearSearch(numbers, VALID_ENTRIES, key);

    if(foundIndex == NOT_FOUND) {
        cout << "Not found!\n";
    } else {
        cout << "Found element: " << numbers[foundIndex] << " at index " << foundIndex << endl;
    }

}

int linearSearch(int array[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if (array[i] == key) {
        return i;
        }
    }

     return -1;
}