#include <deque>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll ice[1000002];
ll d[1000002];

int main(){
	ll n, k;
	ll ans=0;
	cin>>n >>k;
	while(n--){
		ll g,x;
		cin>>g>>x;
		ice[x] =g;
	}
	d[0] = ice[0];
	for(int i =1; i<=1000000;i++){
		d[i] = d[i-1]+ice[i]; //누적 합 구하 기 
	}
	if(k<=1000000){
		for(int i =0;i<=1000000;i++){
			if(i+k<=1000000 && i-k >=1){
				ans = max(ans,d[i+k]-d[i-k-1]); // 윈도우  
			}
		}
		cout <<ans <<'\n';
	}else
		cout<<d[1000000]<<'\n';	

	
}
