#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;



int main(){
	//faster
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	//input
	string s;
	cin>> s;
	
	//v
	int len = s.length();
	int idx[len];
	stack<char> st;
	stack<int> num;
	int answer = 0;
	int t=0;
	vector<int> cal;

	//push stack and find pair then pop and cal
	for(int i =0; i<len;i++){
		if(s[i]=='(' || s[i]=='['){
			cal.push_back(1);
			st.push(s[i]);
		}
		else if(!st.empty()){
			if(s[i]==')' && st.top()=='('){
				if(st.empty())
					return 0;
				st.pop();
				if(cal.back() ==1){ //내부 괄호가 없는 경우 
					cal.pop_back(); //없애버리고
					num.push(2); //num stack에 추가
					//나머지 앖에  값 1씩추가
					int cal_size = cal.size();
					cal[cal_size-1] += 1;			 
					 
				}
				else if(cal.back() >1){
					int temp = 0;
					//값 -1만큼 stack 에서 꺼내서 stack 안 값은 더하기 
					for(int j=1;j<int(cal.back());j++){
					temp += int(num.top());
					num.pop();
				}
				//temp에 2 곱하기 
				temp = 2 * (temp);
				//다시 num stack 에 넣기
				num.push(temp); 
				}else{
					cout <<0;
					return 0;
				}
	
			}else if(s[i]==']'&& st.top() =='['){
				if(st.empty())
					return 0;
				st.pop();
				if(cal.back() ==1){ //내부 괄호가 없는 경우 
					cal.pop_back(); //없애버리고
					num.push(3); //num stack에 추가
					//나머지 cal 값 1씩추가
					int cal_size = cal.size();
					cal[cal_size-1] += 1;
									 
					 
				}else if(cal.back() >1){
					int temp = 0;
					//값 -1만큼 stack 에서 꺼내서 stack 안 값은 더하기 
					for(int j=1;j<int(cal.back());j++){
						temp += int(num.top());
						num.pop();
					}
					//temp에 3 곱하기 
					temp = 3 * (temp);
					//다시 num stack 에 넣기
					num.push(temp); 
				}else{
					cout <<0;
					return 0;
				}
			}else{
				cout<<0;
				return 0;
			}
		
		}else{
			cout <<0;
			return 0;
			break;
		}
	}
	while(!num.empty()){
		cout<<num.top()<<endl;
		answer += num.top();
		num.pop();
	}
		

	cout<< answer <<"----";
}
