import sys
input = sys.stdin.readline

n, k = map(int, input().split())
ices = [0] * 1000001
end = 0

for _ in range(n):
  g, x = map(int, input().split())
  ices[x] = g
  end = max(end, x)

windowSize = 2*k + 1
window = sum(ices[:windowSize])
result = window

for i in range(windowSize, end+1):
  window += ices[i] - ices[i-windowSize]
  result = max(result, window)

print(result)
