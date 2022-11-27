import sys

def count(li, m):
    t = 0
    for n in li:
        if n <= K:
            continue
        elif n < 2*K:
            n -= K
        else:
            n -= 2*K
        t += n//m
    return t
    
N, K, M = map(int, sys.stdin.readline().split())
li = [int(sys.stdin.readline()) for _ in range(N)]
s, e = 1, max(li)
res = 0
while s <= e:
    m = (s+e)//2
    if count(li, m) >= M:
        res = m
        s = m+1
    else:
        e = m-1
print(res if res else -1)