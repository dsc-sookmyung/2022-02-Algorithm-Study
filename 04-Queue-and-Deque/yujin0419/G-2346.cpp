#include <iostream>
#include <string>
#include <deque>
using namespace std;

deque<pair<int,int>> bloons;

void positiveNumber(int cur) {
	for (int i = 0; i < cur - 1; i++) {
		bloons.push_back(bloons.front());
		bloons.pop_front();
	}
}

void negativeNumber(int cur) {
	for (int i = 0; i < (-1) * cur; i++) {
		bloons.push_front(bloons.back());
		bloons.pop_back();
	}
}

void move(int cur) {
	if (cur > 0) positiveNumber(cur);
	else negativeNumber(cur);
}

int main() {
	int number, digit;

	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> digit;
		bloons.push_back(make_pair(digit, i + 1));
	}

	while (!bloons.empty()) {
		int cur = bloons.front().first;
		cout << bloons.front().second << " ";
		bloons.pop_front();

		if (bloons.empty()) break;
		move(cur);
	}
}