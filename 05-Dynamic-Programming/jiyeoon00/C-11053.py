import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

lengths = [1] * n

for i in range(n):
  for j in range(i):
    if(arr[j] < arr[i]):
      lengths[i] = max(lengths[i], lengths[j]+1)

print(max(lengths))