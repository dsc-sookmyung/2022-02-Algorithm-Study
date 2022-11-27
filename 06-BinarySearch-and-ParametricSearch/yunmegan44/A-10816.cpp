#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // 입력 속도 향상

	int n, m, tmp;
	vector<int> n_arr;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		n_arr.push_back(tmp);
	}

	sort(n_arr.begin(), n_arr.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		cout << upper_bound(n_arr.begin(), n_arr.end(), tmp) - lower_bound(n_arr.begin(), n_arr.end(), tmp) << " ";
	}

	return 0;
}