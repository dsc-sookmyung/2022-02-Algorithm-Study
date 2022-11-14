#include <iostream>
#include <vector>

using namespace std;

long long space[92];

long long findd(int n){
	if(n ==0) return 0;
	if(n ==1 || n == 2) return 1;
	if(space[n] != 0){
		return space[n];
	}
	return space[n] = findd(n-1) + findd(n-2);
}

int main(){
	int n;
	
	cin >> n;
	
	long long result = findd(n);
	cout << result;
	return 0;
}

