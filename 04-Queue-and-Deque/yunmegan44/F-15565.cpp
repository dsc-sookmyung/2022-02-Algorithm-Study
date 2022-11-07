#include <iostream>
#include <queue>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // �Է� �ӵ� ���

	int n, k, doll, sum = 0;
	cin >> n >> k;
	int width = n + 1, min = n + 1; //�ִ���� ����
	queue<int> q;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) { //���̾�1, ����ġ2
		cin >> doll;
		arr[i] = doll;
	}

	int last = 0;
	int first = 0;
	while (first < n) {
		if (sum < k) { //k�� ����
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
		else { //k��
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