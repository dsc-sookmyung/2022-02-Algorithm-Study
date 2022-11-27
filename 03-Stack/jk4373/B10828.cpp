#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;


stack<int> pop(stack<int> s){
	if(!s.size()){
		cout<< -1<<'\n';
		
	}else{
		cout<<s.top() << endl;
		s.pop();	
	}
	return s;
}

stack<int> empty(stack<int> s){
	if(!s.size()){
		cout<<1<<'\n';
	}else
		cout<<0<<'\n';
	return s;
}

stack<int> top(stack<int> s){
	if(!s.size())
		cout<<-1 <<'\n';
	else
		cout<<s.top()<<'\n';
	return s;
}

int find_num(string str){
	int res=0, pos=0;
	for(int i=0;i<str.size();i++){
		if(str[i]==' '){
			pos=1;
		}else if(pos ==1){
			res = res*10 + (int)(str[i] -'0');
			pos=1;
		}
	}
	return res;
}
stack<int> push_num(stack<int> s, string str){
	int num = find_num(str);
	s.push(num);
	return s;
}

void stack_func(vector<string> comm, stack<int>s){
	
	
	for(int i=0;i<comm.size();i++){
//		if(comm[i].find("push")!=std::string::npos){
//			int num = find_num(comm[i]);
//			s.push(num);
		if(comm[i] =="pop"){
			s = pop(s);
		}else if(comm[i]=="size"){
			cout<<s.size()<<'\n';
		}else if(comm[i]=="empty"){
			s = empty(s);
		}else if(comm[i]=="top"){
//			s = top(s);
		}
	}
	
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
}



int main(void){
	//speed up
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// input
	int N;
	string temp;
	cin>>N;
	stack<int> s;
	for(int i=0;i<N;i++){
		
		cin>>temp;
		if(temp =="push"){
			int n=0;
			cin>>n;
			s.push(n);
		}else if(temp =="pop"){
			s = pop(s);
		}else if(temp =="size"){
			cout<<s.size()<<'\n';
		}else if(temp =="empty"){
			s = empty(s);
		}else if(temp =="top"){
			s = top(s);
		}
	}
}
