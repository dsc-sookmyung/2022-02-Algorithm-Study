#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> inputData() {
	int total;
	int number;
	vector<int> inputNumber;

	cin >> total;
	for (int i = 0; i < total; i++) {
		cin >> number;
		inputNumber.push_back(number);
	}
	return inputNumber;
}

void print(vector<int> &vector) {
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}
}

int main() {
	vector<int> input = inputData();
	sort(input.begin(), input.end());
	print(input);
	return 0;
}