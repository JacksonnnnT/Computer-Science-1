/**
 * Jackson
 * This file calculates a random storm, with the percentage of hail, wind, tornadoes, and torrential rainfall. 
 *  3/15/2025
*/

// Include necessary files.
#include <iostream>
#include <cmath> // srand()
#include <iomanip>
using namespace std;


void getStormAttributes(); // Gets a random storm attribute.



int main() {
    getStormAttributes();
}

void getStormAttributes() {
    int tornadicActivity = rand() % 100 + 1;
    int hailActivity = rand() % 100 + 1;
    string tornadicActivityResponse;
    string hailActivityResponse;
    string windActivityResponse;
    string rainfallActivityResponse;
    int windActivity = rand() % 100 + 1;
    int rainfallActivity = rand() % 100 + 1;
    
    // Begin tornado activity.
    if(tornadicActivity <= 30) {
        tornadicActivityResponse = "A slight risk for tornadic activity.";
    } else if(tornadicActivity <= 80) {
        tornadicActivityResponse = "A moderate risk for tornadic activity.";
    } else if(tornadicActivity <= 100) {
        tornadicActivityResponse = "A extreme risk for tornadic activity.";
    }

    // Begin wind activity
    if(windActivity <= 30) {
        windActivityResponse = "A slight risk for wind activity.";
    } else if(windActivity <= 80) {
        windActivityResponse = "A moderate risk for wind activity.";
    } else if(windActivity <= 100) {
        windActivityResponse = "A extreme risk for wind activity.";
    }

    // Begin hail activity
    if(hailActivity <= 30) {
        hailActivityResponse = "A slight risk for hail activity.";
    } else if(hailActivity <= 80) {
        hailActivityResponse = "A moderate risk for hail activity.";
    } else if(hailActivity <= 100) {
        hailActivityResponse = "A extreme risk for hail activity.";
    }

    // Begin torrential rain activity.
     if(rainfallActivity <= 30) {
        rainfallActivityResponse = "A slight risk for torrential rain activity.";
    } else if(rainfallActivity <= 80) {
        rainfallActivityResponse = "A moderate risk for torrential rain activity.";
    } else if(rainfallActivity <= 100) {
        rainfallActivityResponse = "A extreme risk for torrential rain activity.";
    }

    // Assemble the table:
    cout << "Forcasted impacts from this supercell: " << "\n";
    cout << setw(10) << left << "Tornadoes";
    cout << setw(15) << right << "Wind";
    cout << setw(15) << right << "Hail";
    cout << setw(15) << right << "Rainfall" << "\n";
    cout << "-----------------------------------------------------------------------" << "\n";

    // Add table entries.
    cout << setw(20) << left << tornadicActivityResponse;
    cout << setw(20) << right << windActivityResponse;
    cout << setw(30) << right << hailActivityResponse;
    cout << setw(30) << right << rainfallActivityResponse;
}