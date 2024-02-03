#include <iostream>
using namespace std; 

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// place elems at correct pos one by one.
void sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int j = i;
		while (j > 0 && arr[j-1] > arr[j]) {
			swap(arr[j-1], arr[j]);
			j--;
		}
	}
}

int main (int argc, char *argv[]) {
	int arr[] = {5,3,2,4,1,7,4,8,2,0};
	sort(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';	
	}
	cout << endl;
	return 0;
}

