#include <iostream>
using namespace std;

int main () {
	int grade, sum= 0;

	for(int i = 0; i <3; i++){

		do {
			cout << "Enter your grade:" << endl;
			cin >> grade;


		}while(grade>= 1 && grade <= 5);
		sum += grade;
}
	cout << "Sum:" << sum << endl;
	cout << "Average Grade:" << (float)sum/3 << endl;
}