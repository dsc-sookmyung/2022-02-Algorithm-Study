#include <iostream>
#include <stack>
using namespace std;

stack<int> moneyBook;

void eraseWrong(int x) {
	if (x == 0) moneyBook.pop();
	else moneyBook.push(x);
}

void input() {
	int number, money;
	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> money;
		eraseWrong(money);
	}
}

void calculateSum() {
	int sum = 0;
	int numberMoney = moneyBook.size();
	for (int i = 0; i < numberMoney; i++) {
		sum += moneyBook.top();
		moneyBook.pop();
	}
	cout << sum;
}

int main() {
	input();
	calculateSum();
	return 0;
}