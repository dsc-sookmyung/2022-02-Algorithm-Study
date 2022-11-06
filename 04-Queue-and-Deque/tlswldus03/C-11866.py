import sys
input = sys.stdin.readline
from collections import deque

n, k = map(int, input().split())
dq = deque(i+1 for i in range(n))

josephusPermutation = []

while(dq):
  for _ in range(k-1):
    dq.append(dq.popleft())
  josephusPermutation.append(dq.popleft())

print(f'<{", ".join(map(str, josephusPermutation))}>')
