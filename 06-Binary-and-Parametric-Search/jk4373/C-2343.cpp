#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int brcount(vector<int> v, int size){
	int sum = 0, cnt = 1;
	
	for(int i = 0; i< v.size()-1;i++){
		sum += v[i];
		if(sum + v[i+1] > size){
			sum = 0;
			cnt++;
		}
	}
	return cnt;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m ;
	cin>> n >> m ;
	vector<int> v;
	
	int s= -1, e = 0, mid, res;
	for(int i = 0; i < n; i++){
		int t;
		cin>> t;
		e += t;
		s = max(t,s);
		v.push_back(t);
	}
//	sort(v.begin(),v.end());	
	
	while(s<=e){
		mid = (s+e)/2;
		if(brcount(v,mid)<=m){
			e = mid -1;
			res = mid;		
		}else{
			s = mid + 1;
		}
	}
	cout << res;
	return 0;

}
