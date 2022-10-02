#include <iostream>
#include <algorithm>
using namespace std;

int findX(int i) {
	int place[3];
	int gap = 0;

	for (int j = 0; j < 3; j++) {
		place[j] = i % 10;
		i = i / 10;
	}
	if (place[0] - place[1] == place[1] - place[2])
		return 1;
	else
		return 0;
}

int main() {
	int n;
	cin >> n;
	int count =0;

	//for 문 돌면서 한수 찾기
	//
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			count = i;
		}
		else if (i == 1000) break;
		else
			count += findX(i);
			
	}
	cout << count;
	return 0;
}