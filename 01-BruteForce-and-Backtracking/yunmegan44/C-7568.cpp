#include <iostream>
#include <cmath>
using namespace std;

struct Size {
	int x;	//몸무게
	int y;	//키
	int rank = 0;	//순위
};

int main()
{
	int n;
	Size size;

	cin >> n;
	Size* arr = new Size[n];

	for (int i = 0; i < n; i++) {
		cin >> size.x >> size.y;
		arr[i].x = size.x;
		arr[i].y = size.y;
	}

	for (int i = 0; i < n; i++) {
		arr[i].rank++;
		for (int j = 0; j < n; j++) {
			if (arr[i].x < arr[j].x && arr[i].y < arr[j].y) {
				arr[i].rank++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i].rank << ' ';
	}

	return 0;
}