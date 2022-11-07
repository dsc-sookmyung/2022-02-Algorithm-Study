import sys

n, k = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

result = int(1e9)
count = 0

left = 0
right = 0
if arr[right] == 1: count += 1

while right < n:
    if count == k:
        result = min(result, right - left + 1)
        if arr[left] == 1: count -= 1
        left += 1
    else:
        right += 1
        if right < n and arr[right] == 1: count += 1

if result == int(1e9):
    print(-1)
else:
    print(result)