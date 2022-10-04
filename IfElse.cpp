#include <iostream>
using namespace std; 


// write a program that checks if the number the user has entered is even or odd
int main () {

	int number;
	cout << " Enter a number Shellyboo and I'll tell you whether it is even or odd" << endl;
	cin >> number;
	if(number%2 == 0) {
		cout << "			"   << "NIGGA IT BE EVEN" ;
	}
	else {
		cout << "			"   << "NIGGA IT BE ODD" ;
	}

// write a program that checks if the values for a,b, & c the user has entered are isocles, scalene or equilateral triangle
	int a, b, c;
	cout << "a,b,c:" ; 
	cin >> a >> b >> c;

	if(a==b && b==c) 
		cout << "The triangle is equilateral" ;
	else {
		if(a!=b && a!=c && b!=c) //"nested" if statement within the else of the previous if statement

				cout << "The triangle is scalene" ;
		else 
			cout << "The triangle is isocles" ;

	}
	return(0);


}