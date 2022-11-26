#include <iostream>
#include <vector>
using namespace std;

#define MAX 8

int width, length;
int maxCount = 0;
int map[MAX][MAX];
int temp[MAX][MAX];

void copyMap() {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            temp[i][j] = map[i][j];
        }
    }
}

void spreadVirus(int x, int y) {
    const int leftAndRight[4] = {-1, 1, 0, 0};
    const int upAndDown[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int checkingLeftAndRight = x + leftAndRight[i];
        int checkingUpAndDown = y + upAndDown[i];

        if (checkingLeftAndRight >= 0 && checkingLeftAndRight < length && 0 <= checkingUpAndDown && checkingUpAndDown < width) {
            if (temp[checkingLeftAndRight][checkingUpAndDown] == 0) {
                temp[checkingLeftAndRight][checkingUpAndDown] = 2;
                spreadVirus(checkingLeftAndRight, checkingUpAndDown);
            }
        }
    }
}

void countSafetyZone() {
    int count = 0;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            if (temp[i][j] == 0) 
                count++;
        }
    }
    if (count > maxCount) maxCount = count;
}

void makeWall(int x, int y, int wall) {
    if (wall == 3) {
        copyMap();
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < width; j++) {
                if (temp[i][j] == 2) 
                    spreadVirus(i, j);
            }
        }
        countSafetyZone();
        return;
    }
    
    for (int i = x; i < length; i++) {
        for (int j = (i == x)? y : 0; j < width; j++) {
            if (map[i][j] == 0) {
                map[i][j] = 1;
                makeWall(i, j, wall + 1);
                map[i][j] = 0;
            }
        }
    }
}

int main() {
    cin >> length >> width;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            cin >> map[i][j];
        }
    }
    makeWall(0, 0, 0);
    cout << maxCount;

    return 0;
}