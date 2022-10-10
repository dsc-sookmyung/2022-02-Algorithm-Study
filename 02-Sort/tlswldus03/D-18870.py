import sys
input = sys.stdin.readline

n = int(input())
x = list(map(int, input().split()))
sortedX = sorted(set(x))

dict = {sortedX[i] : i for i in range(len(sortedX))}

for i in x:
  print(dict[i], end=" ")