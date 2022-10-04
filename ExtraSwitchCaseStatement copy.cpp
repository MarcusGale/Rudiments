#include <iostream>
using namespace std;

int main () {
	int year, month;
	cout << "Enter year FIRST & month of birth:";
	cin >> year >> month;

	switch(month)
	{	// For February we have to check if it is a leap year
		case 2:(year %4 == 0 && year % 100 !=0 && year % 400 !=0)?
		cout << "you have a leap year of 29 days" :  cout << "you have a leap year of 28 days"; break;
		// For all the months you have only 30 days
		case 4:
		case 6:
		case 9:
		case 11: cout << "This is a month of 30 days"; break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:cout << "This is a month of 31 days"; break;
		default:cout << "That's not a month or a year";
	}
return (0);
}