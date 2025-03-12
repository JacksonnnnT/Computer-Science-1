/*
File: pp2b.cpp
Author: Jackson
This program takes user inputed age and compares it to what you can do at that age.
*/
#include <iostream>
using namespace std;

int main() {
        int age;
        cout << "Enter age:";
        cin >> age;

        if(age < 18) {
                return 0;
        }
	if(age >= 18) {
                cout << "You can vote" << endl;
        }
	if(age >= 21) {
                cout << "You can drink" << endl;
        }
	if(age >= 25) {
                cout << "You can rent a car" << endl;
        } 
	if(age >= 65) {
                cout << "You can collect social security"<< endl;
        }
        return 0;
}
