#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int cnt_digits(int n) {
	return to_string(n).length();
}

// number that equals it's sum of all digits raised to the power of number of digits 
bool armstrong(int n) {
	// no of digits.
	int original = n, sop = 0;
	int no_of_digits = cnt_digits(n), digit = 0;
	while(n != 0) {
		digit = n % 10;
		sop += (pow(digit, no_of_digits));
		n /= 10;
	}	
	return sop == original;
}

int main (int argc, char *argv[]) {
	cout << armstrong(153) << endl;	
	return 0;
}
