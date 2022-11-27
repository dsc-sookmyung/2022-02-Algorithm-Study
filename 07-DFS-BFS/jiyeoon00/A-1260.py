import sys
input = sys.stdin.readline
from collections import deque
  
n, m, v = map(int, input().split())

visit_dfs = [False] * (n+1)
visit_bfs = [False] * (n+1)

#양방향 그래프 만들기
edges = [[] for _ in range(n+1)]
for i in range(m):
  v1, v2 = map(int,input().split())
  edges[v1].append(v2)
  edges[v2].append(v1)
for edge in edges:
  edge.sort()

# def dfs1(x):
#   visit_dfs[x] = True
#   print(x, end=" ")
#   for i in edges[x]:
#     if(visit_dfs[i] == False):
#       dfs1(i)

def dfs(x):
  dq = deque([x])
  while(dq):
    v = dq.pop()
    if(visit_dfs[v]==False):
      visit_dfs[v] = True
      print(v, end = " ")
    for i in reversed(edges[v]):
      if(visit_dfs[i] == False):
        dq.append(i)

def bfs(x):
  visit_bfs[x] = True
  dq = deque([x])
  while(dq):
    v = dq.popleft()
    print(v, end = " ")
    for i in edges[v]:
      if(visit_bfs[i] == False):
        visit_bfs[i] = True
        dq.append(i)
        
dfs(v)
print()
bfs(v)