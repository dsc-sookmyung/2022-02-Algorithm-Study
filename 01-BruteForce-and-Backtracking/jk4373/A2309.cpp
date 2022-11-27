#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	int a[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}

	//오름차순 정렬
	sort(a, a + 9);
	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - (a[i] + a[j]) == 100) {
				//결과 출력
				for (int m = 0; m < 9; m++) {
					if (m == i || m == j)
						continue;
					cout << a[m] << endl;
				}
				return 0;
			}
		}
	}

	return 0;
}