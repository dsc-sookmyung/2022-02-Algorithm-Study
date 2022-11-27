#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // �Է� �ӵ� ���

	int n, m, tmp, sum=0, mid, mini=0; //���� ��, ��緹�� ����
	vector<int> v;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		sum += tmp; //�ִ� ��緹�� ũŰ. ���� 1���� ��
		mini = max(mini, tmp); //���� ū ���� ���� == �ּ� ��緹�� ����
		v.push_back(tmp);
	}

	int left = mini;
	int right = sum; //���� �� ���� ~ ���� ����

	while (left <= right) {
		mid = (left + right) / 2;
		int x = 0;
		tmp = 0;
		for (int i = 0; i < n; i++) {
			if (tmp + v[i] > mid) {
				tmp = 0;
				x++;
			}
			tmp += v[i];
		}
		if (tmp != 0) {
			x++;
		}

		if (x > m) {//��緹�� ũ�� �÷�����
			left = mid + 1;
		}
		else { //��緹�� ũŰ �ٿ�����
			right = mid - 1;
		}
	}

	cout << left;
	return 0;
}