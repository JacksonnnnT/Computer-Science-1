/*
File: pp4c.cpp
Author: Jackson
This program calulates the total cost of a item using parameters
*/

//Global constant
const double TAX_RATE = .0925;

#include <iostream>
using namespace std;
double cost(int itemnum, double singlecost){
	double subtotal = itemnum * singlecost;
	double total = subtotal *(1 + TAX_RATE);
	return total;
}

int main(){

	int itemnum;
	double singlecost;
	cout.precision(2);
	cout << fixed;
	//Prompts user for inputs
	cout << "Enter cost of one item and number of items: ";
	cin >> singlecost;
	cin >> itemnum;
	//calls above function
	cout <<"$" << cost(itemnum,singlecost) << endl;
	return 0;
}
