#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>> n;
	int t;
	vector<int> arr;
	for(int i =0; i< n;i++){
		cin>> t;
		arr.push_back(t);
	}
	int d[1001] ={};
	int mmax = 0;
	for(int i = 0; i< n;i++){
		d[i]=1;
		for(int j =0; j<i; j++){
			
			if(arr[i]> arr[j]){
				d[i] = max(d[i],d[j]+1);
			}
		}
		mmax = max(mmax,d[i]);	
	}
	cout<<mmax;
	
	return 0;
	
	
}
