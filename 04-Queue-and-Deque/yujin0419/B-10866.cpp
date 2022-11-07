#include <iostream>
#include <deque>
using namespace std;

deque<int> inDeque;

void resultPushFront() {
	int x;
	cin >> x;
	inDeque.push_front(x);
}

void resultPushBack() {
	int x;
	cin >> x;
	inDeque.push_back(x);
}

void resultPopFront() {
	if (inDeque.empty()) cout << "-1" << "\n";
	else {
		cout << inDeque.front() << "\n";
		inDeque.pop_front();
	}
}

void resultPopBack() {
	if (inDeque.empty()) cout << "-1" << "\n";
	else {
		cout << inDeque.back() << "\n";
		inDeque.pop_back();
	}
}

void resultSize() {
	cout << inDeque.size() << "\n";
}

void isEmpty() {
	if (inDeque.empty()) cout << "1" << "\n";
	else cout << "0" << "\n";
}

void resultFront() {
	if (inDeque.empty()) cout << "-1" << "\n";
	else {
		cout << inDeque.front() << "\n";
	}
}

void resultBack() {
	if (inDeque.empty()) cout << "-1" << "\n";
	else {
		cout << inDeque.back() << "\n";
	}
}

int main() {
	int commandCount;
	string command;

	cin >> commandCount;

	for (int i = 0; i < commandCount; i++) {
		cin >> command;
		if (command == "push_front") resultPushFront();
		else if (command == "push_back") resultPushBack();
		else if (command == "pop_front") resultPopFront();
		else if (command == "pop_back") resultPopBack();
		else if (command == "size") resultSize();
		else if (command == "empty") isEmpty();
		else if (command == "front") resultFront();
		else if (command == "back") resultBack();
	}

	return 0;
}