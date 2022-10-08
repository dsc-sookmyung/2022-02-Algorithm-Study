#include <iostream>
#include <vector>
using namespace std;

int main() {
	int number;
	pair<int, int> weightsAndHeights[50];
	int rank = 1;

	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> weightsAndHeights[i].first >> weightsAndHeights[i].second;
	}

	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			if (weightsAndHeights[i].first < weightsAndHeights[j].first && weightsAndHeights[i].second < weightsAndHeights[j].second) {
				rank++;
			}
		}
		cout << rank << " ";
		rank = 1;
	}
}