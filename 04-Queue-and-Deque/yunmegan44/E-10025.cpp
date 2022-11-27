#include <iostream>
#include <queue>
using namespace std;

int arr[1000001];

int main() {
	int n, k, g, x, sum = 0, max = 0;
	queue<int> q;

	cin >> n >> k;
	k = k * 2 + 1;

	while (n--) {
		cin >> g >> x;
		arr[x] = g;
	}

	for (int i = 0; i < 1000001; i++) {
		if (q.size() < k) { //큐가 다 차있지 않음
			q.push(arr[i]);
			sum += arr[i];
		}
		else {
			sum -= q.front();
			q.pop();
			q.push(arr[i]);
			sum += arr[i];
		}

		if (sum > max) {
			max = sum;
		}
	}

	cout << max << endl;

	return 0;
}