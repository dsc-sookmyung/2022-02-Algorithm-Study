#include <iostream>
#include <string>
#include <queue>
#include <set>
using namespace std;

string s, e, q;
set<string> st;

long long Change(string s) {
	string si = s.substr(0, 2);
	string boon = s.substr(3, 2);

	return 60 * stol(si) + stol(boon);
}
int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> s >> e >> q;
	string str, name;
	int cnt = 0;

	long long S = Change(s);
	long long E = Change(e);
	long long Q = Change(q);

	while (cin.eof() == false) {
		cin >> str;
		string si = str.substr(0, 2);
		string boon = str.substr(3, 2);
		cin >> name;

		if (stoi(si) > 23 || stoi(si) < 0 || stoi(boon) < 0 || stoi(boon) > 59)break; //이 조건은 입력에서 예외를 줬기 때문에 괜찮을것 같다.

		long long time = Change(str);

		if (time <= S) {

			st.insert(name);
		}
		else if (E <= time && time <= Q) {
			if (st.find(name) != st.end()) {
				cnt++;
				auto it = st.find(name);
				st.erase(it);
			}
		}
	}
	cout << cnt;
}