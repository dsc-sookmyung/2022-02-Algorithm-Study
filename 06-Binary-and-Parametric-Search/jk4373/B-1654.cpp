#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


void f_bin(vector<int> v, vector<int> l, int &a, int &b, int n){
	int start, end, mid;
	int min = n + 1;
	int max = -1;
	start = 0; 
	end = v.size() -1; 
	int cnt;
	int idx = 0;
	while(start <= end){
		cnt = 0;
		mid = (end + start) / 2;
//		cout << "start, end , mid" << start << end << mid << endl;	
		for(int i = 0; i < v.size();i++){
			cnt += (v[i] / l[mid]);
		}
//		cout << "cnt and mid "<<cnt << "and"<<mid<<endl;
		if(cnt >n){
			if(max <cnt){
				max = cnt;
				a = l[mid];
//				cout <<"#b: "<< b<<endl;
			}
			start = mid + 1;
//			cout<<"start : " <<start<<endl;
		}else{
			if(min > cnt){
				min = cnt;
				b=l[mid];
//				cout <<"#a: "<< a<<endl;
			}
			end = mid - 1;
		}
		idx++;		

	}
}

int s_bin(vector<int> v, int min, int max, int n){
	long long start, end, mid;
	start = min;
	end = max;
	
	
	int sum;
	long long res = 1000000;
	while(start <= end){
		sum = 0;
		mid = (end + start)/2;
//		cout << "start, end , mid" << start <<" / "<< end <<" / "<< mid << endl;	
		for(int i = 0; i< v.size();i++){
			sum += v[i] / mid;
		}
		if(sum >= n){
//			if(sum<= res){
//				res = sum;
//			}
			start = mid + 1;
			if(res < mid) res = mid;
		}else{
			end = mid -1;
		}
	}
	return mid;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int k, n;
	cin>> k >> n;
	vector<int> v;
	vector<int> l;
	//div
	int div = ceil(n/k);
//	cout<<"div"<<div<<endl;
	for(int i = 0; i< k;i++){
		int temp;
		cin>> temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(int i = 0; i< k; i++){
//		cout << "v/d"<<(v[i]/div) << endl;
		l.push_back(v[i] / div);
	}
	
	//lower, over
	int a =-1;
	int b =-1;
//	cout<<"before min, max" <<a <<","<<b <<endl;
	f_bin(v,l,a,b,n);
//	cout<<"after min, max" <<a <<","<<b <<endl;
	
	
	
	int res;
	res = s_bin(v,a,b,n);
	cout << res;
//	
	
}
