import sys
input = sys.stdin.readline

n, k = map(int, input().split())
numbers = list(map(int, input().split()))

result = len(numbers)
rionNum = 0

left = 0
right = 0
if numbers[right] == 1: 
  rionNum += 1

while(right < n):
  if(rionNum == k):
    result = min(result, right - left +1)
    if(numbers[left]==1):
      rionNum -= 1
    left += 1
  else:
    right += 1
    if(right < n and numbers[right] == 1):
      rionNum += 1

if(numbers.count(1) >= k):
  print(result)
else:
  print("-1")
