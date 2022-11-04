#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main() {
	int testCase, numberSize;
	bool notReverse, error;
	string str, numline;

	cin >> testCase;
	int i;

	while (testCase--) {
		deque<int> number;
		notReverse = true;
		error = false;
		cin >> str >> numberSize >> numline;
		i = 1;
		while (numline[i] != '\0') {
			int x = 0;
			while (numline[i] >= '0' and numline[i] <= '9') {
				x *= 10;
				x += int(numline[i] - '0');
				i++;
			}
			if (x != 0) {
				number.push_back(x);
			}
			i++;
		}

		i = 0;
		while (str[i] != '\0') {
			if (str[i] == 'R') {
				notReverse = !notReverse;
			}
			else if (str[i] == 'D') {
				if (number.empty()) {
					cout << "error" << endl;
					error = true;
					break;
				}
				if (notReverse) {
					number.pop_front();
				}
				else {
					number.pop_back();
				}
			}
			i++;
		}

		if (!error) {
			cout << "[";
		}
		while (!number.empty()) {
			if (notReverse) {
				auto c = number.front();
				number.pop_front();
				cout << c;
			}
			else {
				auto c = number.back();
				number.pop_back();
				cout << c;
			}
			if (!number.empty()) {
				cout << ",";
			}
		}
		if (!error) {
			cout << "]" << endl;
		}
	}
}