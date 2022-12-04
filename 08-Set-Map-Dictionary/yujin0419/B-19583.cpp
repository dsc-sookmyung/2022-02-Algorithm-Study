#include <iostream>
#include <string>
#include <queue>
#include <set>
using namespace std;

string startTime, endTime, quitTime;
set<string> attendance;

long long calculateTime(string time) {
	string hour = time.substr(0, 2);
	string minute = time.substr(3,2);

	return 60 * stol(hour) + stol(minute);
	
}

int main() {
	int cnt = 0;

	cin >> startTime >> endTime >> quitTime;

	long long S = calculateTime(startTime);
	long long E = calculateTime(endTime);
	long long Q = calculateTime(quitTime);


	while (cin.eof() == false) {
		string time, name;
		cin >> time >> name;

		string userHour = time.substr(0, 2);
		string userMinute = time.substr(3, 2);

		if (stoi(userHour) > 23 || stoi(userHour)<0 || stoi(userMinute) < 0 || stoi(userMinute) > 59) {
			break;
		}

		long long timeInNumber = calculateTime(time);

		if (timeInNumber <= S) {
			
			attendance.insert(name);
		}
		else if (E <= timeInNumber && timeInNumber <= Q) {
			if (attendance.find(name) != attendance.end()) {
				cnt++;
				auto it = attendance.find(name);
				attendance.erase(it);
			}
		}

	}
	cout << cnt;
}