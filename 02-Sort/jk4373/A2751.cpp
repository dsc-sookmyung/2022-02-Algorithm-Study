#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	cout.tie(0);
	int N;
	cin >> N;
	int a[N];
	for (int i=0;i<N;i++){
		cin>> a[i];
	}

	sort(a,a+N);
	for (int i=0;i<N;i++){
		cout<< a[i]<<'\n';
	}	

}
