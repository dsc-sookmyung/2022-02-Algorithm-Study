#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int ccount(vector<int> v, int d){
	int ans = 0;
	for(int i = 0; i< v.size();i++){
		ans +=v[i]/d;
	}
	return ans;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, k, m;
	cin>> n>> k>> m;
	
	vector<int> v;
	for(int i = 0; i< n; i++){
		int temp;
		cin>> temp;
		
		if(temp < k){
			temp = 0;
			v.push_back(0);
		}else if(temp<(2*k)){
			temp = temp - k;
			v.push_back(temp);
		}else{
			temp = temp - (2*k);
			v.push_back(temp);
		}
		
		
	}
	sort(v.begin(),v.end());
	int s = 0;
	if(v.size() ==0){
		cout<<-1;
		return 0;
	}
	int e = v[v.size()-1];
	int c = -1;
	int mid;
	while(s<=e){
		mid = (s+e)/2;
		if(mid ==0){
			s++;
			continue;
		}
		if(ccount(v,mid)>=m){
			c = max(mid,c);
			s = mid + 1;
		}else{
			e = mid -1;
		}	
	}
	cout << c;
	return 0;
	
	
	
}
