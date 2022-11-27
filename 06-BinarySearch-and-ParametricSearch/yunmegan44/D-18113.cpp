#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // �Է� �ӵ� ���

	int n, k, m, tmp;
	int left = 1, right = 0, mid;
	vector<int> v;

	cin >> n >> k >> m;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp >= 2 * k) {
			tmp = tmp - 2 * k;
			v.push_back(tmp);
		}
		else if (tmp > k) {
			tmp = tmp - k;
			v.push_back(tmp);
		}
		right = max(tmp, right); //right = ���� �� ��� ����
	}

	int ans = -1;
	while (left <= right) {
		mid = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < v.size(); i++) {
			cnt += v[i] / mid;
		}
		if (cnt >= m) { //ũ�⸦ �ٿ�����
			ans = max(mid, ans);
			left = mid + 1;
		}
		else { // ũ�⸦ �÷�����
			right = mid - 1;
		}
	}
	cout << ans;
	return 0;
}