#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Score{
	string name;
	int Korean;
	int English;
	int Math;
};

bool compare(Score a, Score b){
	if(a.English==b.English && a.Korean==b.Korean && a.Math==b.Math){
		return a.name < b.name;
	}else if(a.English==b.English && a.Korean==b.Korean){
		return a.Math>b.Math;
	}else if(a.Korean==b.Korean){
		return a.English<b.English;
	}else{
		return a.Korean>b.Korean;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int N;
	cin >> N;
	
//	Score scores[100001];
	vector<Score> scores(N);
	for(int i=0;i<N;i++){
		cin>> scores[i].name >>scores[i].Korean >>scores[i].English>>scores[i].Math;
	}
	
	sort(scores.begin(),scores.end(),compare);
	for (int i=0;i<N;i++){
		cout<<scores[i].name<<'\n';
	}
	
}
