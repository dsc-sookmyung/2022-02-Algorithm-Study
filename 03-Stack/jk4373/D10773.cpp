#include <iostream>
#include <stack>

using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int K;
	int temp;
	int count = 0;
	stack<int> st;
	cin >> K;
	for (int i=0;i<K;i++){
		cin >> temp;
		if(temp ==0){
			st.pop();
		}else
			st.push(temp);
	}
	while(!st.empty()){
		count += st.top();
		st.pop();
	}
	cout << count;
}
