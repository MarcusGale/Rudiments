#include <iostream>
using namespace std;

int main () {

	//convert letter into number using ASCII [American Standard Code for Information Interchange]
	cout << (int)'a' << endl;
	cout << int('a') << endl;
	cout << int('A') << endl;
	//convert number into letter using ASCII [American Standard Code for Information Interchange]
	cout << char(67) << endl;
	cout << char(66) << endl;
	cout << char(65) << endl;

// A program that will ask the user for 5 letters and then turn those letters into the corresspondent numbers of the ASCII table
	char c1, c2, c3, c4, c5;
	cout << "Enter 5 letters";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "ASCII converts these into" << "   " <<int(c1) << "   " << int(c2) << "   " << int(c3) << "   " << int(c4) << "   " << int(c5);

}