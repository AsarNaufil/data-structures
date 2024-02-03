#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int rev_num (int n) {
	int rev = 0, num = n;
	while (num != 0) {
		rev = rev * 10 + (num % 10);
		num /= 10;
	}
	return rev;
}

int rev_num_2 (int n) {
	string s = to_string(n);
	reverse(s.begin(),s.end());
	return stoi(s);
}

int main (int argc, char *argv[]) {
	cout << rev_num(456) << endl;
	cout << rev_num_2(456) << endl;
	return 0;
}
