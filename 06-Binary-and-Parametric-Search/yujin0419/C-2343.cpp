#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> courseTime;

int blueRayCount(int amount) {
    int sum = 0;
    int count = 1;

    for (int i = 0; i < courseTime.size() - 1; i++) {
        sum += courseTime[i];
        if (sum + courseTime[i + 1] > amount) { 
            sum = 0;
            ++count;
        }
    }
    return count;
}

int main() {
    int courseNumber, blueRay;
    int minTime = 0, maxTime = 0;
    int result, time;

    cin >> courseNumber >> blueRay;

    for (int i = 0; i < courseNumber; i++) {
        cin >> time;
        courseTime.push_back(time);
        maxTime += time;
        minTime = max(time, minTime);
    }

    while (minTime <= maxTime) {
        int mid;
        mid = (minTime + maxTime) >> 1;

        if (blueRayCount(mid) <= blueRay) {
            maxTime = mid - 1;
            result = mid;
        }
        else {
            minTime = mid + 1;
        }
    }
    cout << result;
}