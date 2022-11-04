#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int findQuntatiy(int length, int hop, vector<int> &iceLocation) {
	int tempSum = 0, maxSum = 0;
	queue<int> ice;
	int range = 2 * hop + 1;

	for (int i = 0; i <= length; i++) {
		if (ice.size() < range) {
			ice.push(iceLocation[i]);
			tempSum += iceLocation[i];
		}
		else {
			tempSum -= ice.front();
			ice.pop();
			ice.push(iceLocation[i]);
			tempSum += iceLocation[i];
		}

		if (maxSum < tempSum) maxSum = tempSum;
	}
	return maxSum;
}

int main() {
	int number, hop, length = 0;
	int gram, location;

	cin >> number >> hop;

	vector<int> iceLocation(1000000, 0);

	for (int i = 0; i < number; i++) {
		cin >> gram >> location;
		if (location > length) length = location;
		iceLocation[location] = gram;
	}

	int answer = findQuntatiy(length, hop, iceLocation);
	cout << answer;
}