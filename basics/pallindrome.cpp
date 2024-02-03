#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int rev_num(int n) {
	string s = to_string(n);
	reverse(s.begin(),s.end());
	return stoi(s);
}

bool is_pallindrome(int n) {
	return rev_num(n) == n;
}

int main (int argc, char *argv[]) {
	cout << is_pallindrome(123321) << endl;
	cout << is_pallindrome(12321) << endl;
	return 0;
}
