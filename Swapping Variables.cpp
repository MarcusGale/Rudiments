#include <iostream>
using namespace std;

int main () {
	// Program for swapping two values of two variables

	int a = 24;
	int b = 43;

	int temporary = a;
	a=b;
	b= temporary;

	cout << "a: " << a << ", b =" << b << endl; 

		// Program for swapping two values of two variables WITHOUT using another variable (like "temporary" above)

	int a = 24;
	int b = 43;

	a = a + b; // 67 add them together to subtract the opposite variable from each other
	b = a - b; //  now b has 24 which originally was a
	a = a - b; // now a has 43 which originally was b

	cout << "a = " << a << ", b = " << b << endl; 
}