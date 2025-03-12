/**
 * @file hw2cisp2.cpp
 * @author Jackson
 * @date 1/29/2025
 * @details This file can calculate home mortgage options for you.
 * @todo There needs to be error handling on this file because some of these variables cannot be less than or equal to 0.
*/
#include <iostream>
#include <cmath>
using namespace std;




int main() {

    // -> Assign fixed interest rates in percent to decimal value:
    const double interestRateOption1 = 0.0675;
    const double interestRateOption2 = 0.0475;
    const double interestRateOption3 = 0.0375;

    // -> The fixed insurance rates and tax rates:
    const double fixedInsuranceRate = 0.0075;
    const  double fixedTaxRate = 0.0045;

    // -> Assign down payment options:
    const double downPaymentMax = 0.2;
    const double downPaymentLow = 0.1;

    // -> These are what we will be getting from the user.
    double price, downPayment, borrowed, interestRate;

    // -> Monthly rates:
    double mortgageInsurance, taxes, mortgage, homeOwnersInsurance, monthlyInterestRate;

    // -> Print welcome and ask for input:
    cout << "Welcome to your home loan!\n";
    cout << "Enter the house price: ";
    cin >> price;
    cout << "Enter your down payment: ";
    cin >> downPayment;


    // -> Error handling:
    if(downPayment or price <= 0) {
        cout << "A logic error has occured, the price of the house or the down payment is less than or equal to 0." << endl;
        exit(true);
    }

    // -> Check to see if user paid less than 10% of down payment:
    if(downPayment < downPaymentLow*price) {

        interestRate = interestRateOption1;

        mortgageInsurance = fixedInsuranceRate*price/12.0;

    // Check if user paid in between 10 and 20%
    } else if(downPaymentLow < downPayment < downPaymentMax*price) {
        interestRate = interestRateOption2;
        mortgageInsurance = fixedInsuranceRate*price/12.0;

    // Check if can pay more than 20%
    } else if(downPayment > downPayment*price) {
        interestRate = interestRateOption3;
        mortgageInsurance = 0;
    }

    // Calculate taxes and homeowners insurance. 
    taxes = fixedTaxRate/12.0;
    homeOwnersInsurance = fixedInsuranceRate * price/12.0;
    monthlyInterestRate = interestRate/12.0;
    borrowed = price - downPayment;
    mortgage = borrowed*(monthlyInterestRate+monthlyInterestRate/(pow(1+monthlyInterestRate,360)-1));

    // Print result:
    cout << "Monthly Mortgage including insurance: " << (mortgage + mortgageInsurance) << "\n";
    cout << "Monthly Escrow: " << (taxes + homeOwnersInsurance) << endl;

    return (0);



}