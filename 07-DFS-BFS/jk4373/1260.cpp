#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

bool visited[MAX];
int map[MAX][MAX]; 
int n,m,v;
queue<int> q;

void rst(){
    for(int i = 1 ; i <= n ; i++)
        visited[i] = 0;
}

void dfs(int x){
    visited[x] = true;
    cout << x << " ";

    for(int i = 1 ; i <= n ; i++){
        if(!visited[i] && map[x][i] == 1) {
            dfs(i);
        }
    }

}

void bfs(int x){
    q.push(x);
    visited[x] = true;
    cout << x << " ";

    while(!q.empty()){                         
        x = q.front(); 
        q.pop(); 

        for(int i = 1 ; i <= n ; i++){
            if(!visited[i] && map[x][i] == 1){
                q.push(i);
                visited[i] = true;
                cout << i << " ";
            }
       }
    }
}

int main()
{
	cin.tie(0);
	cout.tie(0);
    int a,b;
    cin >> n >> m >> v;
    for(int i = 0 ; i < m ; i++){
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    rst();
    dfs(v);
    cout << '\n';
    rst();
    bfs(v);

    return 0;
}
