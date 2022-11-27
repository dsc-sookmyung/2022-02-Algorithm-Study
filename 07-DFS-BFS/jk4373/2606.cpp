#include <iostream>

using namespace std;
#define MAX 101

int N, M;
bool v[MAX];
int map[MAX][MAX];

void dfs(int x, int &cnt){
	if(v[x]) return;
	v[x] = true;
	for(int i = 1 ; i <= N ; i++){
        if(!v[i] && map[x][i] == 1) {
        	cnt++;
            dfs(i,cnt);
        }
    }
}


int main(){
	cin.tie(0);
	cout.tie(0);
	cin>>N;
	cin>>M;
	for(int i = 0; i< M;i++){
		int x, y;
		cin>>x>>y;
		map[x][y] = 1;
		map[y][x] = 1;
	}
	int cnt = 0;
	dfs(1,cnt);
	cout<<cnt;
	
}
