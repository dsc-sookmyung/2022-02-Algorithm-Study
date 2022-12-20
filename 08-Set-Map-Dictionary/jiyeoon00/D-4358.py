import sys
input = sys.stdin.readline
from collections import defaultdict

treedic = defaultdict(int)
totalNum = 0

while(True):
  name = input().rstrip()
  if(name):
    totalNum += 1
    treedic[name] += 1
  else:
    break

sortedtree = sorted(treedic.items(), key = lambda x:x[0])

for name, num in sortedtree:
  percentage = (num/totalNum)*100
  print(name, '%.4f' %percentage)
  