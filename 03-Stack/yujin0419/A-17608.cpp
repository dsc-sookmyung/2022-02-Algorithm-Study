#include <iostream>
#include <stack>
using namespace std;

stack<int> bar;

void input() {
	int number, height;

	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> height;
		bar.push(height);
	}
}

void print(int count) {
	cout << count;
}

int main() {
	int highbar = 0;
	int count = 0;
	
	input();

	while (!bar.empty()) {
		if (highbar < bar.top()) {
			highbar = bar.top();
			count++;
		}
		bar.pop();
	}

	print(count);

	return 0;
}