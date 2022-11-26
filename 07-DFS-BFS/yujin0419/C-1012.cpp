#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 51
int cabbageLocation[MAX][MAX];
int visited[MAX][MAX];
int width, length;

void initialize() {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            cabbageLocation[i][j] = 0;
            visited[i][j] = 0;
        }
    }

}

void dfs(int y, int x) {
    visited[y][x] = 1;

    int leftAndRight[4] = {-1, 1, 0, 0};
    int upAndDown[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int checkingLeftAndRight = x + leftAndRight[i];
        int checkingUpAndDown = y + upAndDown[i];

        if (checkingLeftAndRight < 0 || checkingLeftAndRight >= width || checkingUpAndDown < 0 || checkingUpAndDown >= length)
            continue;
        
        if(cabbageLocation[checkingUpAndDown][checkingLeftAndRight] && !visited[checkingUpAndDown][checkingLeftAndRight]) {
            dfs(checkingUpAndDown, checkingLeftAndRight);
        }
    }
}

int main() {
    int testcase, cabbage;

    cin >> testcase;

    while(testcase--) {
        int warn = 0;
        cin >> width >> length >> cabbage;
        
        initialize();

        for (int i = 0; i < cabbage; i++) {
            int x, y;
            cin >> x >> y;
            cabbageLocation[y][x] = 1;
        }

        for (int i = 0; i < length; i++) {
            for (int j = 0; j < width; j++) {
                if(cabbageLocation[i][j] && !visited[i][j]){
                    dfs(i, j);
                    warn++;
                }
            }
        }
        cout << warn << "\n";
    }
}