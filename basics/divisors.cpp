#include <cmath>
#include <iostream>

using namespace std;

void brute(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0)
      cout << i << ' ';
  }
  cout << endl;
}

void optimal(int n) {
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      cout << i << ' ';
      if (i != n / i)
        cout << n / i << ' ';
    }
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  brute(15);
  optimal(15);
  return 0;
}
