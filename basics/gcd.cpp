#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int n = std::min(a,b), gcd = 1;
	for (int i = 0; i < n; i++) {
		if (i > gcd && a % i == 0 && b % i == 0) 
			gcd = i;
	}
	return gcd;
}

int gcd_2(int a, int b) {
	if(b==0) return a;
	return gcd(b, a%b);
}

int main (int argc, char *argv[]) {
	cout << gcd(8,12) << endl;
	cout << gcd_2(8,12) << endl;
	
	return 0;
}
