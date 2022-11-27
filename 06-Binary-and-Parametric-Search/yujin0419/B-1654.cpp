#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int k, n;
vector<long long> lanLine;
long long result = 0;

int findShare(int length) {
	int share = 0;

	for (int i = 0; i < k; i++) {
		share += lanLine[i] / length;
	}
	return share;
}

void biSearch(long long start, long long end) {
	if (start >= end) {
		return;
	}
	long long mid = (start + end) / 2;
	int count = findShare(mid);
	if (count < n) {
		biSearch(start, mid);
	}
	else {
		result = max(result, mid);
		biSearch(mid + 1, end);
	}
}

int main() {
	cin >> k >> n;
	long long maxLen = 0, number;

	for (int i = 0; i < k; i++) {
		cin >> number;
		lanLine.push_back(number);
		maxLen = max(maxLen, lanLine[i]);
	}

	biSearch(1, maxLen + 1);

	cout << result;
	return 0;
}