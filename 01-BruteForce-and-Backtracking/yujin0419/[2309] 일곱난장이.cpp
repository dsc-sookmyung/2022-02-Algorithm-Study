#include <iostream>
#include <algorithm>
using namespace std;

#define dwarfNum 9
#define sumHeight 100

int getSumHeight(const int *arrayHeight) {
	int sum = 0;
	for (int i = 0; i < dwarfNum; i++) {
		sum += arrayHeight[i];
	}
	return sum;
}

bool isDwarf(const int *arrayHeight, int first, int second) {
	if (sumHeight == getSumHeight(arrayHeight) - (arrayHeight[first] + arrayHeight[second])) {
		return true;
	}
	else {
		return false;
	}
}

int discriminateDwarf(int* arrayHeight) {
	for (int i = 0; i < dwarfNum - 1; i++) {
		for (int j = i + 1; j < dwarfNum; j++) {
			if (isDwarf(arrayHeight, i, j)) {
				arrayHeight[i] = -1;
				arrayHeight[j] = -1;
				return 0;
			}
		}
	}
	return -1;
}

int main() {
	int height[dwarfNum];
	for (int number = 0; number < dwarfNum; number++) {
		cin >> height[number];
	}
	
	discriminateDwarf(height);
	sort(height, height + dwarfNum);

	for (int i = 2; i < dwarfNum; i++) {
		cout << height[i] << endl;
	}
}