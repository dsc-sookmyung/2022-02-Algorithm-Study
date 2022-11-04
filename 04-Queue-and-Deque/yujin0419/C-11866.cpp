#include <iostream>
#include <queue>
using namespace std;

queue<int> people;

int findRemoveNumber(int n, int k) {
	int numberToSave, numberToRemove;

	for (int i = 0; i < k - 1; i++) {
		numberToSave = people.front();
		people.push(numberToSave);
		people.pop();
	}

	numberToRemove = people.front();
	return numberToRemove;
}

int main() {
	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++) {
		people.push(i);
	}

	cout << "<";
	while (people.size() > 1) {
		cout << findRemoveNumber(n, k) << ", ";
		people.pop();
	}
	cout << people.front() << ">";

	return 0;
}