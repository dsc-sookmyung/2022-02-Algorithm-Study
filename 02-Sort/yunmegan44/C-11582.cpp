#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, tmp, k = 0;
	cin >> n; //2�� �ŵ�����
	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	cin >> k; //2�� �ŵ�����

	int num = n / 2; //ȸ�� ��
	while (num >= k) {
		int size = n / num;
		for (int i = 0; i < n; i= i + size) {
			sort(v.begin()+i, v.begin() + i + size);
		}
		if (num == k) {
			for (int i = 0; i < n; i++) {
				cout << v[i] << " ";
			}
		}
		num = num / 2;
	}

	return 0;
}