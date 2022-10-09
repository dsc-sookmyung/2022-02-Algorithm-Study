import sys
input=sys.stdin.readline

def check(s,e):
    if((e-s)>(n/k)):  ##정렬 정지 조건
        return
    mid=int((s+e)/2);
    idx1=s; idx2=mid+1; idx3=0;
    
    while(idx1<=mid and idx2<=e):
        if(num[idx1]<=num[idx2]):
            tmp[idx3]=num[idx1]
            idx3+=1; idx1+=1
        else:
            tmp[idx3]=num[idx2]
            idx3+=1; idx2+=1
    while(idx1<=mid):
        tmp[idx3]=num[idx1]
        idx3+=1; idx1+=1
    while(idx2<=e):
        tmp[idx3]=num[idx2]
        idx3+=1; idx2+=1
    for i in range(s,e+1):
        num[i]=tmp[i-s]
        
def merge(s,e):
    if s==e:
        return
    mid=int((s+e)/2)
    merge(s,mid)
    merge(mid+1,e)
    check(s,e)
    

n=int(input())
num=list(map(int,input().split()))
tmp=[0]*n
k=int(input())
merge(0,n-1)
print(*num)