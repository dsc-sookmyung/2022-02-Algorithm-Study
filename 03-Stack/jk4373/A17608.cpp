#include <iostream>
#include <stack>


using namespace std;
int main(){
	// ���� ū ���� ����⸸ ���δ�
	ios::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int N, temp;
	stack<int>x;
	int max=0, count=0;
	cin >> N;
	for(int i=0;i<N;i++){
		cout<<i;
		cin>> temp;
		x.push(temp);
	}
	while(!x.empty()){
		if(max<x.top()){
			max = x.top();
			count+=1;
		}
		x.pop();
	}
	cout<< count;
} 
