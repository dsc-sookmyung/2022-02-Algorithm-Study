import sys
input = sys.stdin.readline

num = int(input())
bodys = [list(map(int, input().split())) for _ in range(num)]

for i in bodys:
  rank = 1
  for j in bodys:
    if(i[0]<j[0] and i[1]<j[1]):
      rank += 1
  print(rank)


