#include <iostream>
#include <utility>
#include <deque>
using namespace std;

deque <pair<int, int>> dq;

int move(int mv) {
	pair<int, int> del;
	if (mv > 0) {//���
		for (int i = 0; i < mv-1; i++) {
			dq.push_back(dq.front());
			dq.pop_front();
		}
		del = dq.front();
		dq.pop_front();
		cout << " " << del.first;
		return del.second;
	}
	else { //����
		for (int i = 0; i < mv*-1-1; i++) {
			dq.push_front(dq.back());
			dq.pop_back();
		}
		del = dq.back();
		dq.pop_back();
		cout << " " << del.first;
		return del.second;
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); // �Է� �ӵ� ���

	int n, tmp, mv = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		dq.push_back(make_pair(i + 1, tmp)); //<����, ��>
	}

	mv = dq.front().second; //1�� ����
	cout << dq.front().first;
	dq.pop_front();
	while (!dq.empty()) {
		mv = move(mv);
	}
	
	return 0;
}