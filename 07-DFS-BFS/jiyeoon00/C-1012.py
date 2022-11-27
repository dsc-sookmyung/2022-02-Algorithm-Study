import sys
input = sys.stdin.readline
from collections import deque

dy = (1,0,-1,0)
dx = (0,1,0,-1)

def bfs(start_y, start_x):
  dq = deque()
  dq.append((start_y, start_x))
  field[start_y][start_x] = 0
  while(dq):
    y, x = dq.popleft()
    for i in range(4):
      ny = y + dy[i]
      nx = x + dx[i]
      if(0<=nx<m and 0<=ny<n and field[ny][nx] == 1):
        dq.append((ny, nx))
        field[ny][nx] = 0
   
  
for _ in range(int(input())):
  count = 0
  m, n, k = map(int, input().split())
  field = [[0] * m for _ in range(n)]
  for i in range(k):
    x, y = map(int, input().split())
    field[y][x] = 1
  for y in range(n):
    for x in range(m):
      if(field[y][x] == 1):
        bfs(y, x)
        count += 1
  print(count)
