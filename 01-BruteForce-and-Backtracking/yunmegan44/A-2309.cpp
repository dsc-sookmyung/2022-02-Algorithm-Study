#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr9[9]; //9���� �迭
	int all9 = 0; //9���� ����
	int all7 = 0; //7���� ����
	int first = 0; //ù��° ���ܴ��
	int second = 0; //�ι�° ���ܴ��

	for (int i = 0; i < 9; i++) {
		cin >> arr9[i];
		all9 += arr9[i];
	}

	sort(arr9, arr9 + 9);

	for (int a = 8; a > 0; a--) {
		for (int b = 0; b < a; b++) {
			all7 = all9 - arr9[a] - arr9[b];
			if (100 == all7) {
				first = a;
				second = b;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if ((i != first) && (i != second)) {
			cout << arr9[i] << endl;
		}
	}

	return 0;
}