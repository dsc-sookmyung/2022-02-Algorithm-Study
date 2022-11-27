#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define MAX 1001

bool visited[MAX];
vector<int> nodes[MAX];

void initialize(int node) {
    for (int i = 1; i <= node; i++) {
        visited[i] = 0;
    }
}

void dfs(int temp) {
    if(visited[temp]) return;
    visited[temp] = true;
    cout << temp << ' ';

    for (int i = 0; i < nodes[temp].size(); i++) {
        int linked = nodes[temp][i];
        dfs(linked);
    }
}

void bfs(int start) {
    queue<int> nodeQueue;
    nodeQueue.push(start);
    visited[start] = true;

    while (!nodeQueue.empty()) {
        int temp = nodeQueue.front();
        nodeQueue.pop();
        cout << temp << " ";

        for (int i = 0; i < nodes[temp].size(); i++) {
            int linked = nodes[temp][i];
            if (!visited[linked]) {
                nodeQueue.push(linked);
                visited[linked] = true;
            }
        }
    }
}

int main() {
    int node, line, startNode;
    int x, y;
    cin >> node >> line >> startNode;

    for (int i = 0; i < line; i++) {
        cin >> x >> y;
        nodes[x].push_back(y);
        nodes[y].push_back(x);
    }

    for (int i = 0; i <= node; i++) {
        sort(nodes[i].begin(), nodes[i].end());
    }

    initialize(node);
    dfs(startNode);
    cout << "\n";

    initialize(node);
    bfs(startNode);

    return 0;
}