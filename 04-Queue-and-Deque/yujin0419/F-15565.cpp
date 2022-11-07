#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;

deque<int> rionApeach;
vector<int> rionLocation;

void findLion(int lion) {
	int size = 0;
	
	while (!rionApeach.empty()) {
		size++;
		if (rionApeach.front() == 1) {
			rionLocation.push_back(size);
		}
		rionApeach.pop_front();
	}
}
 
int minimumSize(int rion) {
	int tempSum = 0, minSum = 1000001; 

	for (int i = 0; i < rionLocation.size() - rion + 1; i++) {
		tempSum = rionLocation[i + rion -1] - rionLocation[i] + 1;
		if (tempSum < minSum) minSum = tempSum;
	}
	
	return minSum;
}

void print(int rion) {
	if (rionLocation.size() < rion) {
		cout << -1;
	}
	else {
		cout << minimumSize(rion);
	}
}

int main() {
	int doll, rion, kindOfDoll;

	cin >> doll >> rion;

	for (int i = 0; i < doll; i++) {
		cin >> kindOfDoll;
		rionApeach.push_back(kindOfDoll);
	}

	findLion(rion);
	print(rion);

	return 0;
}