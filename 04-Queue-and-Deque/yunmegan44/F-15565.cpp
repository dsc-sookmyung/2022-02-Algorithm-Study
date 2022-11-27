#include <iostream>
#include <queue>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // 입력 속도 향상

	int n, k, doll, sum = 0;
	cin >> n >> k;
	int width = n + 1, min = n + 1; //최대범위 지정
	queue<int> q;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) { //라이언1, 어피치2
		cin >> doll;
		arr[i] = doll;
	}

	int last = 0;
	int first = 0;
	while (first < n) {
		if (sum < k) { //k개 이하
			if (last < n) {
				q.push(arr[last]);
				if (arr[last] == 1) sum++;
				last++;
			}
			else {
				if (min == n + 1) {
					cout << "-1" << endl;
					return 0;
				}
				else break;
			}
		}
		else { //k개
			if (q.front() == 1) sum--;
			q.pop();
			first++;
		}
		if (sum == k) {
			width = q.size();
			if (width < min) min = width;
		}
	}
	cout << min << endl;

	return 0;
}