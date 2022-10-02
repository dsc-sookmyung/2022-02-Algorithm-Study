#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr9[9]; //9명의 배열
	int all9 = 0; //9명의 총합
	int all7 = 0; //7명의 총합
	int first = 0; //첫번째 제외대상
	int second = 0; //두번째 제외대상

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