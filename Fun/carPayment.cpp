/**
 * @file carPayment.cpp
 * @author Jackson T. Napier
 * @date 1/29/2025
 * @details This file can calculate your monthly car payment.
 * @todo There needs to be error handling on this file because some of these variables cannot be less than or equal to 0.
*/
#include <iostream>
#include <cmath>
using namespace std;


// -> Fixed numbers based on TN automotive sales tax which is 7%.
const double salesTax = 0.07; // 7%

// -> Fixed interest rates to be compounded monthly according to local bank: 
const double interestRateTwelveMonths = 0.0899; // 8.99% / 100
const double interestRateTwentyFourMonths = 0.1099; // 10.99% / 100
const double interestRateSixtyMonths = 0.1221;

int main() {
    // -> Need user inputs:
    double carPrice, downPayment, interestRate, total, monthlyPayment;
    int loanTerm;
    
    // Print welcome and fetch user input.
    cout << "Welcome to your monthly car payment calculator:\n ";

    cout << "Enter the price of your car: ";
    cin >> carPrice;
    cout << "Enter the down payment you paid: ";
    cin >> downPayment;
        // Verify if the down payment and the price is not = if it is print a message that says you don't have a monthly payment.
      if(carPrice == downPayment) {
        cout << "You don't have a monthly payment as you paid off the car. Thank you for using the monthly car payment calculator.";
        // End the process:
        exit(true);
    }

    cout << "Enter the term of your loan (i.e. 12 months, 24 months, 60 months) ";
    cin >> loanTerm;

    // -> Get the loan term:
    if(loanTerm == 12) {
        interestRate = interestRateTwelveMonths;
    } else if(loanTerm == 24) {
        interestRate = interestRateTwentyFourMonths;
    } else if(loanTerm == 60) {
        interestRate = interestRateSixtyMonths;
    } 
    
    // -> Calculate the following:
    const double loanPrincipal = carPrice - downPayment;

    // -> Do the Formula:
   monthlyPayment = (loanPrincipal * interestRate * pow(1 + interestRate, loanTerm)) / (pow(1 + interestRate, loanTerm) - 1);

   cout << "Your monthly payment is in the ball park of: " << monthlyPayment << " dollars a month." << endl;






}



