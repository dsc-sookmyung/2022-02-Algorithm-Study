import sys
input = sys.stdin.readline

k, n = map(int, input().split())
arr = [int(input()) for _ in range(k)]

left = 1
right = max(arr)

while(left<=right):
  mid = (left + right)//2
  count = 0
  for i in arr:
    count += i//mid
  if(count < n):
    right = mid - 1
  else:
    left = mid + 1

print(right)