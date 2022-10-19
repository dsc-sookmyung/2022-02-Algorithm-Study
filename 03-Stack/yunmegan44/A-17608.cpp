#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n, tmp, count = 0;
	cin >> n; 
	stack<int> st;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		st.push(tmp);
	}

	int h = 0;
	while (!st.empty()) {
		if (h < st.top()) {
			count++;
			h = st.top();
		}
		st.pop();
	}

	cout << count;

	return 0;
}