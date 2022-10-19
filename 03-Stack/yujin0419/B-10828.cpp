#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> inStack;

bool notExist() {
	if (inStack.empty()) return true;
	else return false;
}

void resultPush() {
	int x;
	cin >> x;
	inStack.push(x);
}

void resultPop() {
	if (notExist()) cout << "-1" << "\n";
	else {
		cout << inStack.top() << "\n";
		inStack.pop();
	}
}

void countSize() {
	cout << inStack.size() << "\n";
}

void isEmpty() {
	if (notExist()) cout << "1" << "\n";
	else cout << "0" << "\n";
}

void resultTop() {
	if (notExist()) cout << "-1" << "\n";
	else {
		cout << inStack.top() << "\n";
	}
}

int main() {
	int commandCount;
	string command;

	cin >> commandCount;

	for (int i = 0; i < commandCount; i++) {
		cin >> command;
		if (command == "push") resultPush();
		else if (command == "pop") resultPop();
		else if (command == "size") countSize();
		else if (command == "empty") isEmpty();
		else if (command == "top") resultTop();
	}

	return 0;
}