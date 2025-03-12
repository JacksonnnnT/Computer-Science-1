/* File: pp6a.cpp
 * Author: Jackson
 * Description: this program reads one number from a file and writes it to a file
 */
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void readNumber(ifstream& in, double& num);
void writeNumber(ofstream& out, double num);

int main() {
   double num;
   char inputFilename[256];
   char outputFilename[256];
   char c;
   ifstream input;
   ofstream output;
   cout << "Enter the name of the input file: ";
   cin >> inputFilename;

   input.open( inputFilename ); // Open the file
   if(input.fail()) {
	cout << "File " <<inputFilename << " does not exist" << endl;

   } else {

	cout << "Enter the name of the output file: ";
	cin >> outputFilename;
   input.get(c);

   if(input.eof()) {
	cout << "File " << inputFilename << " is empty" << endl;
  } else {
   
   output.open(outputFilename);

	input.putback(c);
   }

   if(!(input >> num)) {
    cout << "File " << inputFilename << " is empty." << endl;
   }

   while(!input.fail()) {
      
      writeNumber(output, num);
      readNumber(input, num);

   }

   input.close(); // Close input
   output.close(); // Close output
   return 0;
   }
}


void readNumber(ifstream& in, double& num) {
   in >> num;
}

void writeNumber(ofstream& out, double num) {
   out << fixed << setprecision(2) << "The number is: $" << num << endl;
}
