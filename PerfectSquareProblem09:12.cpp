// Marcus Gale
#include <iostream>
using namespace std;

int main() {
   long i=0;
    long j=1;
    while(i==0) 
        
        long sr=j*j;
        // Taking the last digit and second to last digit and checking if they're both odd
        if((sr%2==1)&&((sr/10)%2==1)){ 
            i=j;
        } else {
            j=j+2;
        }
    
	cout << "i = " << i << endl;
	cout << "i^2 = " << i*i << endl;
	// Mirroring the if statement by dividing by 10 for the second to last digit
	// and modding both digits by 10
	cout << "The digit before last: " << ((i*i)/10)%10 << endl;
	cout << "Last digit: " << (i*i)%10 << endl;
    
	return 0;
}

