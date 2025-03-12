/* 
File: pp2d.cpp
Author: Jackson
This program assigns a letter grade based upon numeric grade
*/
#include <iostream>
using namespace std;

int main(){
	int grade;
	cout << "What is your number grade:";
	cin >> grade;
	if(grade >= 93){
		cout << "Your grade is a A"<< endl;
	}else if(grade >= 83 && grade <= 93){
		cout << "Your grade is a B" << endl;	
	}else if(grade >= 73 && grade <= 83){
		cout << "Your grade is a C" << endl;
	}else if(grade >=63 && grade <= 73){
		cout << "Your grade is a D" << endl;
	}else{
	cout << "Your grade is a F" << endl;
	}
}
