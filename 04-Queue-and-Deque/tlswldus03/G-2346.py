import sys
input = sys.stdin.readline
from collections import deque

n = int(input())
dq = deque(enumerate(map(int, input().split())))
result = []

while(dq):
  i, move = dq.popleft()
  result.append(i+1)
  if(move>0):
    dq.rotate(-move+1)
  else:
    dq.rotate(-move)

print(*result)

