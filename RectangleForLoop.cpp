#include <iostream>
using namespace std;

int main () {
	int height, width;
	cout << "Height:" ;
	cin >> height;
	cout << "Width:" ;
	cin >> width;
	char Symbol;
	cout << "Symbol:" ;
	cin >> Symbol;

	for(int h=0; h < height; h++) {
		for(int w = 0; w<width; w++){
			cout << Symbol;
		}
	}
	cout << endl;
}