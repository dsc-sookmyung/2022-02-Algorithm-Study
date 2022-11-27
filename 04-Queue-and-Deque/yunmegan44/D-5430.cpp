#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	int t, n= 0; //�׽�Ʈ ���̽� ����, �迭 ���� ���� ����
	string p, str; //�׽�Ʈ ���̽��� ������ �Լ�, �迭 ���ڿ�
	deque<int> dq;
	cin >> t;

	while (t--) {
		cin >> p >> n >> str;
		string tmp;
		for (int i = 0; i < str.size(); i++) {
			if ((str[i] == ',') || (str[i] == ']')) {
				if (tmp != "") {
					dq.push_back(stoi(tmp));
					tmp.clear();
				}
			}
			else if (str[i] != '[') {
				tmp += str[i];
			}
		}

		bool error = false;
		bool reverse = false;

		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') {
				reverse = !reverse;
			}
			else { //'D'
				if (!reverse) { //false
					if (!dq.empty()) {
						dq.pop_front();
					}
					else {
						error = true;
						cout << "error" << endl;
						break;
					}
				}
				else { //true
					if (!dq.empty()) {
						dq.pop_back();
					}
					else {
						error = true;
						cout << "error" << endl;
						break;
					}
				}
			}
		}

		if (!error) { //false
			cout << "[";
			if (!reverse) { //false
				while ((dq.size() != 1) && (!dq.empty())) { //n~2
					cout << dq.front() << ",";
					dq.pop_front();
				}
				if (dq.size() == 1) { //1
					cout << dq.front();
					dq.pop_front();
				}
				cout << "]" << endl;
				
			}
			else {//true
				while ((dq.size() != 1) && (!dq.empty())) {
					cout << dq.back() << ",";
					dq.pop_back();
				}
				if (dq.size() == 1) { //1
					cout << dq.back();
					dq.pop_back();
				}
				cout << "]" << endl;
			}
		}
	}

	return 0;
}