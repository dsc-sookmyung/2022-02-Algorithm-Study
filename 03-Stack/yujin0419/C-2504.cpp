#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	stack<char> bracket;

	cin >> str;

	int answer = 0, temp = 1;
	for ( int i = 0; i <str.length(); i++) {
		if (str[i] == '(') {
			temp *= 2;
			bracket.push('(');
		}
		else if (str[i] == '[') {
			temp *= 3;
			bracket.push('[');
		}
		else if (str[i] == ')') {
			if (bracket.empty() || bracket.top() != '(') {
				answer = 0;
				break;
			}
			if (str[i - 1] == '(') {
				answer += temp;
				temp /= 2;
				bracket.pop();
			}
			else {
				temp /= 2;
				bracket.pop();
			}
		}
		else if (str[i] == ']') {
			if (bracket.empty() || bracket.top() != '[') {
				answer = 0;
				break;
			}
			if (str[i - 1] == '[') {
				answer += temp;
				temp /= 3;
				bracket.pop();
			}
			else {
				temp /= 3;
				bracket.pop();
			}
		}
	}

	if (!bracket.empty()) answer = 0;
	cout << answer << "\n";

	return 0;
}