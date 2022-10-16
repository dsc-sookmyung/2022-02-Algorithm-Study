#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int k = 0;
	int n;
	stack<int> s;

	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0) {
			s.pop();
		}
		else {
			s.push(n);
		}
	}

	int len = s.size();
	int ans = 0;
	for (int i = 0; i < len; i++) {
		ans += s.top();
		s.pop();
	}

	cout << ans <<'\n';
	return 0;
}
