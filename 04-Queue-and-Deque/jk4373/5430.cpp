#include <iostream>
#include <deque>
#include <string>
using namespace std;

void MakeDQ(deque<int> &DQ, string s){
	int len = s.length();
	string t = "";
	for (int i=0;i<len;i++){
		if(isdigit(s[i])){
			t +=s[i];
		}
		else{
			if(!t.empty()){
				DQ.push_back(stoi(t));
				t ="";
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while(T--){
		//입력에 대한 처리 
		string p, tmp;
		int n;
		cin>> p;
		cin>>n;
		cin>>tmp;
		deque<int> DQ;
		//string -> deque
		MakeDQ(DQ,tmp);
		
		
		
		int size = p.length();
		bool reverse = false;
		bool error = false;
		for(int i=0;i<size;i++){
			if(p[i]=='R'){
				if(reverse) reverse = false;
				else reverse = true;
			}else{ //D
				if(DQ.size()>0){
					if(reverse){
						DQ.pop_back();
					}else{
						DQ.pop_front();
					}
					
				}else{
					error = true;
//					cout<<"error"<<'\n';
					break;
				}
				
			}
		}
		//cout
		if(error) cout<<"error"<<'\n';
		else{
			cout<<"[";
			while(!DQ.empty()){
				if(reverse){
					cout<<DQ.back();
					DQ.pop_back();
					if(!DQ.empty())
						cout<<",";

				}else{
					cout<<DQ.front();
					DQ.pop_front();
					if(!DQ.empty())
						cout<<",";
				}
				
			}
			
			cout<<"]"<<'\n';
		}
	}
}
