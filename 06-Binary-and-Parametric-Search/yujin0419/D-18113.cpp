#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int numberOfGimbob, tail, afterGimbob;
int cuttingLength;
vector<int> gimbobLength;

bool isCut(int mid) {
	int count = 0;
	for (int i = 0; i < numberOfGimbob; i++) {
		if (gimbobLength[i] >= 2 * tail)
			count += (gimbobLength[i] - 2 * tail)/ mid;
		else if (gimbobLength[i] < 2 * tail && gimbobLength[i] > tail)
			count += (gimbobLength[i] - tail) / mid;
	}
	return count >= afterGimbob;
}

void binarySearch(int left, int right) {
	int mid = (left + right) / 2;

	if (left > right) return;
	if (isCut(mid)) {
		cuttingLength = max(cuttingLength, mid);
		binarySearch(mid + 1, right);
	}
	else
		binarySearch(left, mid - 1);
}

int main() {
	int maxLength = 0;

	cin >> numberOfGimbob >> tail >> afterGimbob;

	for (int i = 0; i < numberOfGimbob; i++) {
		int length;
		cin >> length;
		gimbobLength.push_back(length);
		maxLength = max(maxLength, gimbobLength[i]);
	}
	cuttingLength = -1;
	binarySearch(1, maxLength - tail);
	cout << cuttingLength << "\n";

	return 0;
}