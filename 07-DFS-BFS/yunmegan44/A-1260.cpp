#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> vec[10002];
vector<int> result_bfs;
vector<int> result_dfs;
bool visit[1002];

void bfs(int temp) {
    queue<int> q;
    q.push(temp);
    visit[temp] = true;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        result_bfs.push_back(x);

        for (int i = 0; i < vec[x].size(); i++) {
            if (!visit[vec[x][i]]) { 
                q.push(vec[x][i]);
                visit[vec[x][i]] = true;
            }
        }
    }
}

void dfs(int x) {
    visit[x] = true;
    result_dfs.push_back(x);

    for (int i = 0; i < vec[x].size(); i++) {
        if (!visit[vec[x][i]]) { 
            dfs(vec[x][i]);
        }
    }
}

int main() {
    int n, m, v, a, b;
    cin >> n >> m >> v;

    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        vec[a].push_back(b); 
        vec[b].push_back(a); //����� ����ó��
    }
    for (int i = 1; i <= n; i++) {
        sort(vec[i].begin(), vec[i].end()); // ���� ���ں��� Ž��.
    }
    bfs(v);
    memset(visit, false, sizeof(visit));
    dfs(v);
    for (int i = 0; i < result_dfs.size(); i++) {
        cout << result_dfs[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < result_bfs.size(); i++) {
        cout << result_bfs[i] << " ";
    }

    return 0;
}