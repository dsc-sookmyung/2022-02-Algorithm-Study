#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x = 0;
	cin >> n; //1 ~ 1000

	if (n < 100) { //1~99
		cout << n;
	}
	else if (n < 1000) {//100~999
		x = 99;
		for (int i = 100; i <= n; i++) {
			int hun = i / 100;
			int ten = (i / 10) % 10;
			int one = i % 10;
			if ((hun - ten) == (ten - one)) {
				x++;
			}
		}
		cout << x;
	}
	else { //1000
		cout << 144;
	}

	return 0;
}