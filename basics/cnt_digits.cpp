#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int cnt_digits(int n) {
	int x = n, count = 0;
	while (x != 0) {
		x /= 10;
		count++;
	}
	return count;
}

int cnt_digits_2(int n) {
	return to_string(n).length();
}
int cnt_digits_3(int n) {
	return floor(log10(n) + 1);
}

int main (int argc, char *argv[]) {
	cout <<	cnt_digits(34982) << endl;
	cout <<	cnt_digits_2(34982) << endl;
	cout <<	cnt_digits_3(34982) << endl;
	return 0;
}
