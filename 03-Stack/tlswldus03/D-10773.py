import sys
input = sys.stdin.readline
from collections import deque

stack = deque()

for _ in range(int(input())):
  num = int(input())
  if(num == 0):
    stack.pop()
  else:
    stack.append(num)

print(sum(stack))