#include <iostream>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // 입력 속도 향상

	int n = 0;//max 1000
	int memo[1001] = { 0, };
	cin >> n;

	memo[1] = 1;
	memo[2] = 2;
	for (int i = 3; i <= n; i++) {
		memo[i] = (memo[i - 1] + memo[i - 2]) % 10007;
	};

	cout << memo[n];

	return 0;
}