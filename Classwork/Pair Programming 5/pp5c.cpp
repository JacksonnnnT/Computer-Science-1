/*
Jackson 
pp5c.cpp
This file gets data from a user.
*/
#include <iostream>
#include <string>
using namespace std;

void getData(string&, int&);


int main() {
  string name;
  int age;
  getData(name, age);
  cout << name << " " << age << endl;

}


void getData(string& name,  int& age) {
 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your age: ";
 cin >> age;

}




