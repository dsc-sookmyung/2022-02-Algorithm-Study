import sys
input = sys.stdin.readline
from collections import defaultdict

n, m = map(int, input().split())

namedic = defaultdict(int)
unknownList = []

for i in range(n):
  name = input().rstrip()
  namedic[name] += 1

for _ in range(m):
  name = input().rstrip()
  namedic[name] += 1
  if(namedic[name] == 2):
    unknownList.append(name)

unknownList.sort()
unknownNum = len(unknownList)
print(unknownNum)
for i in unknownList:
  print(i)
  