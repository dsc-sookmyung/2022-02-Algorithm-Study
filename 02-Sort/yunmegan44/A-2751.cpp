#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void merge(int arr[], int p, int q, int r) {
	int* arr2 = new int[r - p + 1]();
	int le = p, ri = q + 1;
	for (int i = 0; i < r - p + 1; i++) {
		if (le > q) {
			arr2[i] = arr[ri];
			ri++;
		}
		else if (ri > r) {
			arr2[i] = arr[le];
			le++;
		}
		else {
			if (arr[le] > arr[ri]) {
				arr2[i] = arr[ri];
				ri++;
			}
			else {
				arr2[i] = arr[le];
				le++;
			}
		}
	}

	for (int i = 0; i < r - p + 1; i++) {
		arr[p + i] = arr2[i];
	}

	delete[] arr2;
}

void mergeSort(int arr[], int p, int r) {
	if (p < r) {
		int q = floor((p + r) / 2);
		mergeSort(arr, p, q);
		mergeSort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}