#include <iostream>
using namespace std;


// bool isPrimeNumber (int number) {
// 	for (int i = 2; i < number; i++) {
// 		if(number % i == 0)
// 			return false; 
// 	}
// 	 	return true;

// }
int main() {
	int number;
	cout << "Enter any number:";
	cin >> number; 

	bool isPrimeNumber = true;
		for (int i = 2; i < number; i++) {
		if(number % i == 0) {
		isPrimeNumber = false; 
			break;
		}
	}
		if(isPrimeNumber)
		cout << "the number		" << endl;
		else 
		cout << "is not Prime" << endl; 
}