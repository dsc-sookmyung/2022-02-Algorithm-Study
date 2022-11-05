#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,K;
vector<int> v;

int main() {
    cin >> N >> K; // N, K �Է¹ޱ�

    for(int i=0;i<N;i++) { //���̾��̶�� �ε��� ����
        int x;
        cin >> x;
        if(x==1) v.push_back(i);
    }

    int result=987654321;

    if(v.size()<K) cout << "-1"; //���̾��� K���� ������ -1 ���
    else {
        for(int i=0;i<=v.size()-K;i++) 
            result=min(result,v[i+K-1]-v[i]+1);
        cout << result; // �ƴ϶�� ���� ���� �ε��� ���� ���
    }
}
