#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct Student {
	string name;
	int korean;
	int english;
	int math;
};

vector<Student> inputData() {
	int n;
	Student s;
	vector<Student> student;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s.name >> s.korean >> s.english >> s.math;
		student.push_back(s);
	}
	return student;
}

bool compare(Student &a, Student &b) {
	if (a.korean == b.korean) {
		if (a.english == b.english) {
			if (a.math == b.math) {
				return a.name < b.name;
			}
			else {
				return a.math > b.math;
			}
		}
		else {
			return a.english < b.english;
		}
	}return a.korean > b.korean;
}

void print(vector<Student>& vector) {
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i].name << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	vector<Student> studentCopy = inputData();
	sort(studentCopy.begin(), studentCopy.end(), compare);
	print(studentCopy);
}