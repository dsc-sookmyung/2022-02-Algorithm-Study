#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];
int visited[101] = { 0 };
int cnt;

void dfs(int x) {
    if (visited[x]) return;
    visited[x] = 1;
    cnt++;
    for (int i = 0; i < v[x].size(); i++) {
        int y = v[x][i];
        dfs(y);
    }
}

int main(int argc, const char* argv[]) {
    int N, M;
    int a, b;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);
    cout << cnt - 1 ;

    return 0;
}