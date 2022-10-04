#include <iostream>
using namespace std;
 
int main (){

	//Multiplication Table
	for (int i = 1; i <= 34; i++){
		for(int j = 1; j <= 34; j++) {
			cout <<  i	 << "	*	" << 	j	 << "	=	" << i*j << endl ;  
		}
		cout << endl;
	}
}