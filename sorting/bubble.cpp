#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
}

int main (int argc, char *argv[]) {
	int arr[] = {5, 3, 2, 4, 1, 7, 4, 8, 2, 0};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr_size);
	// Printing the sorted array
	for (int i = 0; i < arr_size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	return 0;
}
