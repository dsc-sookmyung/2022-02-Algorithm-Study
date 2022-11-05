#include <deque>
#include <iostream>
#include <vector>

using namespace std;

int dodo(deque<int> &DQ,vector<int> v, int d){
	int res = v[d-1];
	int next=  -1;
	if(res >0){
		for(int i=1;i<res;i++){
			DQ.push_back(DQ.front());
			DQ.pop_front();
		}
		cout<<DQ.front()<<" ";
		next = DQ.front();
		DQ.pop_front();
	}else{
		res *=-1;
		for(int i=1;i<res;i++){
			DQ.push_front(DQ.back());
			DQ.pop_back();
		}
		cout<<DQ.back()<<" ";
		next= DQ.back();
		DQ.pop_back();	
		
	}
	return next;
}


void MakeDQ(deque<int> &DQ, int n){
	for (int i=1;i<=n;i++){
		DQ.push_back(i);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	deque<int> DQ;
	MakeDQ(DQ,n);
	int t=1;
	vector<int> v;
	for(int i=0;i<n;i++) { 
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout<<1<<" ";
    DQ.pop_front();
	while(!DQ.empty()){
		t = dodo(DQ,v,t);
	}
	
}
