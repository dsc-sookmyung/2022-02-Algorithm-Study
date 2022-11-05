#include <iostream>
#include <queue>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, K;
	cin >> N >>K ;
	
	queue<int> Q;
	for (int i =1;i<=N;i++){
		Q.push(i);
	}

	cout <<"<";
	while(N--){
		for (int i=1;i<K;i++){
			Q.push(Q.front());
			Q.pop();
		}
		cout<<Q.front();
		Q.pop();
		if(Q.size()==0){
			cout<<">";
		}else
			cout<<", ";
	}
	
	
}
