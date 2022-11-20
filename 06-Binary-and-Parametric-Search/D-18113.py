import sys

input = sys.stdin.readline

n, k, m = map(int, input().split())
arr = []

def binary(left, right):
  p = -1
  while (left <= right):
    mid = (left + right) // 2
    count = 0
    for i in arr:
        count += i // mid
    if (count < m):
        right = mid - 1
    else:
        left = mid + 1
        p = max(p, mid)
  print(p)

for i in range(n):
    num = int(input())
    if (num > k and num < 2*k):
        arr.append(num - k)
    elif (num > 2 * k):
        arr.append(num - 2*k)

if(len(arr) > 0):
  binary(1, max(arr))
else:
  print(-1)