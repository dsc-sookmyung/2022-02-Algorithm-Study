import sys
input = sys.stdin.readline

n, destination, block = map(int, input().split())

isBlock = [False]*(n+1)
for i in list(map(int, input().split())):
  isBlock[i] = True
  
for i in range(1, destination):
  now = 1
  for _ in range(n):
    now = (now+i)%n
    if(now==0):
      now = n
    if(isBlock[now] or now == destination):
      break
  if(now == destination):
    print(i)
    break
    

