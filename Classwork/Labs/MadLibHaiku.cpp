/*
Jackson T. Napier
MadLibHaiku.cpp
This program launches a game of "Mad Libs".

To-do
Write string replacement scripts
Do while loops for main() 
clean main up
*/

// Include modules:
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

/// Global constants:
const int MAX_HAIKUS = 30;
const int MAX_LINE_LENGTH = 51; // 50 Chars and the null character.
const int LINES_PER_HAIKU = 3;
const int PLAY_AGAIN = 1;


// Function declarations:
int getAndReadFile(char haikus[][MAX_LINE_LENGTH]);
void asteriskRegex(char haiku[LINES_PER_HAIKU][MAX_LINE_LENGTH], const char noun[], const char adj[], const char gerund[]);
void capitalize(const char word[]); // Helper function.
void printHaiku(char haiku[LINES_PER_HAIKU][MAX_LINE_LENGTH]);
int readPlayerInput(char input);


int main() {

    srand(time(0)); // SEED ONCE.
    // Init haikus.
    char haikus[MAX_HAIKUS * LINES_PER_HAIKU][MAX_LINE_LENGTH]; // 90 Lines: 30 * 3.
    char noun[20], adjective[20], gerund[20]; // User input.
    int count = getAndReadFile(haikus); // Get the number of lines read.
    
    int totalHaikus = count / LINES_PER_HAIKU;
    int randomIndex = rand() % totalHaikus; // Randomly select a haiku.
    int startLine = randomIndex * LINES_PER_HAIKU;

    char selectedHaiku[LINES_PER_HAIKU][MAX_LINE_LENGTH]; // The selected random haiku.
    for(int i = 0; i < LINES_PER_HAIKU; i++) {
        strcpy(selectedHaiku[i], haikus[startLine + i]);
    }



    cout << "Welcome to Mad Libs!" << "\n";
    cout << "Enter a one syllable noun: ";
    cin >> noun;
    cout << "Enter a two syllable adjective: ";
    cin >> adjective;
    cout << "Enter a two syllable gerund: (e.g. running): ";
    cin >> gerund;
    cout << "Your MadLib Haiku: " << "\n";
    asteriskRegex(selectedHaiku, noun, adjective, gerund);
    printHaiku(selectedHaiku);
    capitalize(gerund);
    cout << "\n" << gerund << endl;
     
}

/* getAndReadFile - Function opens the file, reads the contents into the array, and returns the number of haikus read.

Parameters:
fileName - The name of the file to open and read into.
haikus - A 2D Array for haikus to go into.

Pre-Condition:
fileName - Is a valid file in the working directory.

Post-Condition: 
Haikus array contains haikus from input file.
Returns number of haikus (rows) read from input file into haikus array. 
*/
int getAndReadFile(char haikus[][MAX_LINE_LENGTH]) {
    int lineCount = 0;
    ifstream input;

    input.open("haikus.dat");
    if(input.fail()) { // If for some reason input fail, return an error.
        cout << "Haiku file non-existent. Please contact the administrator." << endl;
        return 0;

    } 
    else {
        if(input.eof()) { // If for some reason input empty, return an error.
            cout << "Haiku file is empty. Please contact the administrator." << endl;
            return 0;
        }
    }
    while(lineCount < MAX_HAIKUS * LINES_PER_HAIKU && input.getline(haikus[lineCount], MAX_LINE_LENGTH)) {
        lineCount++;
    }
    input.close();
    return lineCount;
}

/* printHaiku - Function prints a haiku.
Parameters: 
haikus - 2D array of haikus.

Returns nothing. 
*/

void printHaiku(char haiku[LINES_PER_HAIKU][MAX_LINE_LENGTH]) {
    int j; // Initialize loop variable.

    for(int j = 0; j < LINES_PER_HAIKU; j++) {
        cout << haiku[j] << endl; // Print haiku.
    } 
}

/* capitalize - This function capitalizes the first letter in a word.
Parameters:
word - A 1D array of characters.

Pre-Conditions:
word - Is a valid array of characters.

Post-Conditions: 
The word's first letter is capitalized.
*/
void capitalize(const char word[]) {
    if(islower(word[0])) { // The FIRST letter in the array, check if it is lower cased.
        toupper(word[0]); // Uppercase the word.
    }
}

/* replaceAsterisk - This function replaces an asterisk in the haiku.
Parameters: 
haiku - A 2D array holding the haiku to replace the asterisk in.
noun - A one syllable noun given by the user.
adj - A two syllable adjective given by the user.
gerund - A three syllable gerund (e.x. running) given by the user.

Pre-Conditions: 
haiku - Actually holds a haiku.
noun, adj, gerund - Are valid words.

Post-Conditions:
haiku - Is actually altered, and asterisks are replaced when seen by the function. 
Returns: 
Nothing. 
*/
void asteriskRegex(char haiku[LINES_PER_HAIKU][MAX_LINE_LENGTH], const char noun[], const char adj[], const char gerund[]) {
    int replacementCount = 0;
    // init new phrase
    char newPhrase[0]; 

    // Filter through the lines of the haiku.
    for(int i = 0; i < LINES_PER_HAIKU; i++) {
        for(int j = 0; j < MAX_LINE_LENGTH; j++) { // Filter through the characters of the haiku.
            if(haiku[i][j] == '*') { // Find an asterisk.
                if(replacementCount % 3 == 0) { // Found the first asterisk, which will be replaced by a noun.
                    strcpy(haiku[i] + j, noun);
                } else
                if(replacementCount % 3 == 1) { // Found the second asterisk, which is replaced by an adjective.
                    strcpy(haiku[i] + j, adj);
                } else // Found the third and last asterisk which will be replaced by a gerund.
                {
                    capitalize(gerund);
                    strcpy(haiku[i] + j, gerund);
                }
                replacementCount++; // Update replacement count, then reset the loop.
            }  
        }
    } 


}