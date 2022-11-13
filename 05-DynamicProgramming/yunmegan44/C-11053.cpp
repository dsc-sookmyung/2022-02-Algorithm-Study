#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // 입력 속도 향상

	int n;
	int a[1001] = {0, };
	int dp[1001] = {1, };
	int len = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++){
			if (a[i] > a[j]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		len = max(len, dp[i]);
	}
	cout << len;

	return 0;
}