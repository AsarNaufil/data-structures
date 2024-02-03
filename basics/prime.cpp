#include <cmath>
#include <iostream>

using namespace std;

bool prime(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) return false;	
	}
	return true;
}

int main (int argc, char *argv[]) {
	cout << prime(23) << endl;
	return 0;
}
