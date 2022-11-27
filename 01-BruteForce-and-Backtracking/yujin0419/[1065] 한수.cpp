#include <iostream>
#include <vector>
using namespace std;

int Han(int x) {
	int count = 0;

	if (x < 100) {
		return x;
	}
	else {
		count = 99;
		for (int i = 100; i <= x; i++) {
			int hundred = i / 100;
			int ten = (i / 10) % 10;
			int one = i % 10;

			if (hundred - ten == ten - one) {
				count++;
			}
		}
	}
	return count;
}

int main() {
	int input;
	cin >> input;

	cout << Han(input);
	
	return 0;
}