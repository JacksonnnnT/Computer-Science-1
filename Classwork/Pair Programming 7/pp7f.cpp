/**
 * Jackson Napier
 * pp7f.cpp 
 * This program sorts numbers from smallest to largest. 
*/

// Include necessary namespaces and modules.
#include <iostream>
using namespace std;

// Constants
const int MAX_NUMBERS = 8;

// Define functions.
void selectionSort(int intArray[], int n);

int main() {
    int intArray[MAX_NUMBERS] = { 2, 5, 8, 9, 1, 4, 3, 6 };

    cout << "Original Array: " << "\n";
    for(int i = 0; i < MAX_NUMBERS; i++) {
        cout << intArray[i] << ", ";
    }
    // -> Call for selectionSort:
    selectionSort(intArray, MAX_NUMBERS); 
    cout << "\n" << "Sorted Array: " << "\n";
    for(int i = 0; i < MAX_NUMBERS; i++) {
        cout << intArray[i] << ", ";
    }
}

/** selectionSort
 * This function sorts an array of integers from greatest to largest. 
 * This function uses a generic selection sorting algorithm. 
 * 
 * Parameters:
 * int intArray - An array of integers to sort through. 
 * int n - The maximum amount of objects in the array to sort through. 
 *
 * Returns nothing (type void)
 *  
 * Example: selectionSort(ArrayOfIntegers[], numberOfItems);
*/
void selectionSort(int intArray[], int n) {

    // Use for loops to sort.
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i; // Initialize the minIndex.

        // Use a secondary for loop.
        for(int j = i + 1; j < n; j++) {
            if(intArray[j] < intArray[minIndex]) {
            minIndex = j;
            }
        }

        if(minIndex != i) {
        int temp = intArray[i];
        intArray[i] = intArray[minIndex];
        intArray[minIndex] = temp;

    }
}
}