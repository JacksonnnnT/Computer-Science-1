/*
* File: pp1c.cpp
* Author: Jackson Napier
* This program calculates 15 specified problems with already specified numbers and displays the results.
*/

#include <iostream>
#include <bitset>
int main() {

int i = 3, j = 10;
double x = 9.9, y = -0.6;

std::cout << "i / j is " << i/j << std::endl;
  
std::cout << "i % j  is " << i%j << std::endl;

std::cout << "j / i is " << j/i << std::endl;

std::cout << "j % i is " << j%i << std::endl;

std::cout << "x * i / j is " << x*i/j << std::endl;

std::cout << "x * (i / j) is " << x*(i/j) << std::endl;

std::cout << "x/y+i is " << x/y+i << std::endl;

std::cout << "j + y / x " << j+y/x << std::endl;

std::cout << "static_cast<double> (i) / j + y is " << static_cast<double> (i)/j+y << std::endl;

std::cout << "x / (y+i) is " << x/(y+i) << std::endl;

std::cout << "(j+y)/x is " << (j+y)/x << std::endl;

std::cout << "i | j is " << std::bitset<8>(i|j) << std::endl;

std::cout << "i & j is " << std::bitset<8>(i&j) << std::endl;

std::cout << "i << 2 is " << std::bitset<8>(i<<2) << std::endl;

std::cout << "j >> 3 is " << std::bitset<8>(j>>3) << std::endl;




}
