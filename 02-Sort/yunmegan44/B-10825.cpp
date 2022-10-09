#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool compare(tuple<string, int, int, int> a, tuple<string, int, int, int> b) {
	if ((get<1>(a) == get<1>(b)) && (get<2>(a) == get<2>(b)) && (get<3>(a) == get<3>(b))) {
		return get<0>(a) < get<0>(b);//�̸�
	}
	else if ((get<1>(a) == get<1>(b)) && (get<2>(a) == get<2>(b))) {
		return get<3>(a) > get<3>(b);//����
	}
	else if (get<1>(a) == get<1>(b)) {
		return get<2>(a) < get<2>(b);//����
	}
	else {
		return get<1>(a) > get<1>(b);//����
	}
}

int main()
{
	int n, kor, eng, math;
	string name;
	cin >> n;
	//<�̸�,<<����, ����>, ����>>
	vector<tuple<string, int, int, int>> v;
	
	for (int i = 0; i < n; i++) {
		cin >> name >> kor >> eng >> math;
		v.push_back(make_tuple(name, kor, eng, math));
	}

	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < n; i++) {
		cout << get<0>(v[i]) << '\n';
	}

	return 0;
}