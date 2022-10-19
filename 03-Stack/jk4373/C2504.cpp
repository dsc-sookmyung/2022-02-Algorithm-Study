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
				if(cal.back() ==1){ //���� ��ȣ�� ���� ��� 
					cal.pop_back(); //���ֹ�����
					num.push(2); //num stack�� �߰�
					//������ �׿�  �� 1���߰�
					int cal_size = cal.size();
					cal[cal_size-1] += 1;			 
					 
				}
				else if(cal.back() >1){
					int temp = 0;
					//�� -1��ŭ stack ���� ������ stack �� ���� ���ϱ� 
					for(int j=1;j<int(cal.back());j++){
					temp += int(num.top());
					num.pop();
				}
				//temp�� 2 ���ϱ� 
				temp = 2 * (temp);
				//�ٽ� num stack �� �ֱ�
				num.push(temp); 
				}else{
					cout <<0;
					return 0;
				}
	
			}else if(s[i]==']'&& st.top() =='['){
				if(st.empty())
					return 0;
				st.pop();
				if(cal.back() ==1){ //���� ��ȣ�� ���� ��� 
					cal.pop_back(); //���ֹ�����
					num.push(3); //num stack�� �߰�
					//������ cal �� 1���߰�
					int cal_size = cal.size();
					cal[cal_size-1] += 1;
									 
					 
				}else if(cal.back() >1){
					int temp = 0;
					//�� -1��ŭ stack ���� ������ stack �� ���� ���ϱ� 
					for(int j=1;j<int(cal.back());j++){
						temp += int(num.top());
						num.pop();
					}
					//temp�� 3 ���ϱ� 
					temp = 3 * (temp);
					//�ٽ� num stack �� �ֱ�
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
