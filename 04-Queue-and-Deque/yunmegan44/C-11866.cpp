#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, k = 0;
	cin >> n >> k;
	int* arr = new int[n];

	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";
	while (q.size() != 1) {
		for (int i = 1; i < k; i++) {
			int tmp = q.front();
			q.push(tmp);
			q.pop();
		}
		cout << q.front();
		q.pop();
		cout << ", ";
	}
	cout << q.front() << ">";

	return 0;
}