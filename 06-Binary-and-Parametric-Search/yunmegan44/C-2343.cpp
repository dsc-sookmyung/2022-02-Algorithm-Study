#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // 입력 속도 향상

	int n, m, tmp, sum=0, mid, mini=0; //강의 수, 블루레이 개수
	vector<int> v;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		sum += tmp; //최대 블루레이 크키. 개수 1개일 때
		mini = max(mini, tmp); //가장 큰 강의 길이 == 최소 블루레이 길이
		v.push_back(tmp);
	}

	int left = mini;
	int right = sum; //가장 긴 강의 ~ 강의 총합

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

		if (x > m) {//블루레이 크기 늘려야함
			left = mid + 1;
		}
		else { //블루레이 크키 줄여야함
			right = mid - 1;
		}
	}

	cout << left;
	return 0;
}