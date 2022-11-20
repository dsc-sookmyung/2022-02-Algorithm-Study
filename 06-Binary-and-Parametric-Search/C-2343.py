import sys
input = sys.stdin.readline

n, m= map(int, input().split())
arr = list(map(int, input().split()))

left = max(arr)
right = sum(arr)

while(left<=right):
  bluSize = (left + right)//2
  count = 1
  currentBluSize = 0
  for i in arr:
    if(currentBluSize + i > bluSize):
      count += 1
      currentBluSize = 0
    currentBluSize += i
  if(count <= m):
    right = bluSize - 1
  else:
    left = bluSize + 1

print(left)