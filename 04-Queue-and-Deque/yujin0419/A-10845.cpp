#include <iostream>
#include <queue>
using namespace std;

queue<int> inQueue;

void resultPush() {
	int x;
	cin >> x;
	inQueue.push(x);
}

void resultPop() {
	if (inQueue.empty()) 
		cout << -1 << "\n";
	else {
		cout << inQueue.front() << "\n";
		inQueue.pop();
	}
}

void resultSize() {
	cout << inQueue.size() << "\n";
}

void isEmpty() {
	if (inQueue.empty()) cout << 1 << "\n";
	else cout << 0 << "\n";
}

void resultFront() {
	if (inQueue.empty())
		cout << -1 << "\n";
	else {
		cout << inQueue.front() << "\n";
	}
} 

void resultBack() {
	if (inQueue.empty())
		cout << -1 << "\n";
	else {
		cout << inQueue.back() << "\n";
	}
}

int main() {
	int n;
	string command;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") resultPush();
		else if (command == "pop") resultPop();
		else if (command == "size") resultSize();
		else if (command == "empty") isEmpty();
		else if (command == "front") resultFront();
		else if (command == "back") resultBack();
	}

	return 0;
}