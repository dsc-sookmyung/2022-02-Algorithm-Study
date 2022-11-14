import sys
input = sys.stdin.readline
n = int(input())
mmap = [tuple(map(int, input().split())) for i in range(n)]
dp = [[0]*n for i in range(n)]
for i in range(n-1):
    for j in range(n-1-i):
        k = i+j+1
        dp[j][k] = 2**31
        for p in range(j, k):
            dp[j][k] = min(dp[j][k], dp[j][p] + dp[p+1][k] + mmap[j][0]*mmap[p][1]*mmap[k][1])
print(dp[0][-1])
