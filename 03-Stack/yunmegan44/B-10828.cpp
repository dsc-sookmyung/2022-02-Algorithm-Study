#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n = 0;
	string str;
	int num;
	stack<int> st;

	cin >> n;
	cin.ignore(); //버퍼 삭제

	for (int i = 0; i < n; i++) {
		getline(cin, str);

		if (str.find("push") != string::npos) {
			num = stoi(str.substr(4));
			str = "push";
		}

		if (str == "push") {
			st.push(num);
		}else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}else {
				cout << "-1" << endl;
			}
		}else if (str == "size") {
			cout << st.size() << endl;
		}else if (str == "empty") {
			if (!st.empty()) {
				cout << "0" << endl;
			}
			else {
				cout << "1" << endl;
			}
		}else if (str == "top") {
			if (!st.empty()) {
				cout << st.top() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}

	return 0;
}
