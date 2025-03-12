/*
File:pp6c.cpp
Author: Jackson
This program reads all charcters including whitespace from user input until newline
*/
#include <iostream>
#include <string>
using namespace std;

// Function to read and discard characters from input until newline is encountered.
void readline() {
    char ch;
    do {
        ch = cin.get();  // Read one character, including whitespace.
    } while(ch != '\n' && ch != EOF);
}

int main() {
    string word1;
    string word2;

    // Prompt and read the first word.
    cout << "Enter first word: ";
    cin >> word1;

    // Discard the rest of the input line.
    readline();

    // Prompt and read the second word.
    cout << "Enter second word: ";
    cin >> word2;

    // Output both words.
    cout << word1 << " " << word2 <<"\n";

    return 0;
}

