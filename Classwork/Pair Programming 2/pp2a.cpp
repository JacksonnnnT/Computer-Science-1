/*
File: pp1a.cpp
Author: Jackson
This program prints a quote from Hitchhikers' Guide to the Galaxy
*/
#include <iostream>
using namespace std;
int main() {	
	double x = 42.1298;
	cout.precision(0);
	cout.setf(ios::fixed);
	cout << "the answer to the question of \nLife, The Universe, and Everything is " << x;
	cout.precision(1);
	cout.setf(ios::showpoint);
	cout << ", not " <<x;
	cout.precision(2);
	cout << "\n\t and not $" << x <<" ";
}
