from collections import deque
import sys
input = sys.stdin.readline

n = int(input())

bars = deque(int(input()) for _ in range(n))
maxBar = bars.pop()
count = 1

while(bars):
  nowBar = bars.pop()
  if(maxBar < nowBar):
    count += 1
    maxBar = nowBar
    
print(count)