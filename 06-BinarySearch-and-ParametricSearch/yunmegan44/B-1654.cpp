#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // �Է� �ӵ� ���

	int k, n;
	long long tmp = 0, ans = 0, maxx = 0;
	vector<long long> v;

	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> tmp;
		maxx = max(tmp, maxx); //�� �� �ִ� �ִ� ����
		v.push_back(tmp);
	}

	long long left = 1, right = maxx, mid;

	while (left <= right) {
		mid = (left + right) / 2;
		long long q = 0; //��
		for (int i = 0; i < k; i++) {
			q += v[i] / mid;
		}
		if (q < n) { //��ǥ �������� ���� -> ���� ���̱�
			right = mid - 1;
		}
		else { //��ǥ �������� ���ų� ���� -> ���� �ø���
			left = mid + 1;
			ans = max(ans, mid); //�ִ� ���� ����
		}
	}

	cout << ans;

	return 0;
}