#include <iostream>
#include <vector>
using namespace std;

#define MAX 100

vector<int> computers[MAX];
bool visited[MAX];
int cnt = 0;

void initialize(int node) {
    for (int i = 1; i <= node; i++) {
        visited[i] = 0;
    }
}

void dfs(int temp) {
    if(visited[temp]) return;
    visited[temp] = true;
    cnt++;

    for (int i = 0; i < computers[temp].size(); i++) {
        int linked = computers[temp][i];
        dfs(linked);
    }
}

int main() {
    int computerNumber, line;
    cin >> computerNumber >> line;

    for (int i = 0; i < line; i++) {
        int computerX, computerY;
        cin >> computerX >> computerY;

        computers[computerX].push_back(computerY);
        computers[computerY].push_back(computerX);
    }

    initialize(computerNumber);
    dfs(1);
    cout << cnt - 1;

    return 0;
}