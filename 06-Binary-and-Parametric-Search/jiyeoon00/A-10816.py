import sys
input = sys.stdin.readline
from collections import defaultdict

result = []
numberCard = defaultdict(int)

n = int(input())
numbers = map(int, input().split())
for i in numbers:
  numberCard[i] += 1

m = int(input())
howManyNumber = map(int, input().split())
for i in howManyNumber:
  result.append(numberCard[i])

print(*result)