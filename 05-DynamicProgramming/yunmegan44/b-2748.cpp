#include <iostream>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // 입력 속도 향상

	int n = 0;//max 90
	long long memo[91] = { 0, };
	cin >> n;

	memo[1] = 1;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	};

	cout << memo[n];

	return 0;
}