#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Chicken {
public:
	int store;
	vector<int> chickenRanking;
	int targetMember;

	void mergeSort(vector<int>&, int, int);
	void merge(vector<int>&, int, int, int);
	void mergeTest();
	void print();
};

void Chicken::merge(vector<int>& nums, int left, int middle, int right) {
	if ((right - left) > (store / targetMember)) return;
	vector<int> tmp(right - left + 1);
	int i = left;
	int j = middle + 1;
	int k = 0;

	while (i <= middle && j <= right) {
		if (nums[i] <= nums[j])
			tmp[k++] = nums[i++];
		else
			tmp[k++] = nums[j++];
	}

	while (i <= middle) tmp[k++] = nums[i++];
	while (j <= right) tmp[k++] = nums[j++];
}

void Chicken::mergeSort(vector<int>& nums, int left, int right) {
	if (left >= right) return;
	int middle = left + (right - left) / 2;
	mergeSort(nums, left, middle);
	mergeSort(nums, middle + 1, right);
	merge(nums, left, middle, right);
}

void Chicken::print() {
	for (int i = 0; i < store; i++) {
		cout << chickenRanking[i] << ' ';
	}
}

int main() {
	ios::sync_with_stdio(false);
	int n, k;
	vector<int> v;

	Chicken chicken;
	cin >> n;
	chicken.store = n;
	int number;

	for (int i = 0; i < n; i++) {
		cin >> number;
		v.push_back(number);
	}
	chicken.chickenRanking = v;
	cin >> k;
	chicken.targetMember = k;

	chicken.mergeSort(chicken.chickenRanking, 0, chicken.store - 1);
	chicken.print();

	return 0;
}