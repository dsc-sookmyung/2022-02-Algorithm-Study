#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // 입력 속도 향상

	int k, n;
	long long tmp = 0, ans = 0, maxx = 0;
	vector<long long> v;

	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> tmp;
		maxx = max(tmp, maxx); //될 수 있는 최대 길이
		v.push_back(tmp);
	}

	long long left = 1, right = maxx, mid;

	while (left <= right) {
		mid = (left + right) / 2;
		long long q = 0; //몫
		for (int i = 0; i < k; i++) {
			q += v[i] / mid;
		}
		if (q < n) { //목표 개수보다 적음 -> 길이 줄이기
			right = mid - 1;
		}
		else { //목표 개수보다 같거나 많음 -> 길이 늘리기
			left = mid + 1;
			ans = max(ans, mid); //최대 길이 선정
		}
	}

	cout << ans;

	return 0;
}