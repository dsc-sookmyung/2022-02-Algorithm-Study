#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int N,temp, k;
	vector<int> score;
	cin>> N;

	for(int i=0;i<N;i++){
		cin>> temp;
		score.push_back(temp);
	}
	cin>>k;
	
	int half = N/2;
	while(half >=1){
		int group = N/half;
		for(int i=0;i<N-1;i = i+group)
			sort(score.begin()+i,score.begin()+i+group);
		if(half ==k){
			for(int i=0;i<N;i++) cout << score[i]<<' ';
			break;
		}
		half = half/2;
	}
	
}
