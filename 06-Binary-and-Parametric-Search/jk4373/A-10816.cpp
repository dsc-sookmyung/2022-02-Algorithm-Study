#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


//int ccount(vector<int> m, int &c){
////	long long L_bound = lower_bound(m.begin(),m.end(),c);
////	int U_bound = upper_bound(m.begin(),m.end(),c);
////	
//	return (U_bound - L_bound);
//}


int main(){
	
	cout.tie(0);
	cin.tie(0);
	int ans = 0;
	
	int n;
	cin>>n;
	vector<int> v;
	for(int i = 0; i<n;i++){
		int temp;
		cin>> temp;
		v.push_back(temp);
	}
	int m;
	cin>>m;
	vector<int> res;
	sort(v.begin(),v.end());
	for(int i =0 ; i< m;i++){
		int c;
		cin>> c;
		int t = upper_bound(v.begin(),v.end(),c)-lower_bound(v.begin(),v.end(),c);
		cout <<t<<" ";
		res.push_back(t);
	}
	
//	for(int i = 0;)
//	cout <<ans;
	return 0;
}


