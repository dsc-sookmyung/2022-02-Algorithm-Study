import sys
input = sys.stdin.readline
from collections import deque

chicken = int(input())
flavor = deque(input().split())
k = int(input())

flavorValue = [[] for _ in range(k)]

for i in range(k):
  for _ in range(chicken//k):
    flavorValue[i].append(int(flavor.popleft()))

for i in flavorValue:
  i.sort()
  print(*i, end=" ")




