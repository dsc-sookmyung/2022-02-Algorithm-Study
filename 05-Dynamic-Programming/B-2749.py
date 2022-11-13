import sys
input = sys.stdin.readline

n = int(input())%(15 * 100000)

pivoRemainders = [0] * (15 * 100000 + 1)

pivoRemainders[0] = 0
pivoRemainders[1] = 1

for i in range(2, n+1):
  pivoRemainders[i] = (pivoRemainders[i-1] + pivoRemainders[i-2])%1000000

print(pivoRemainders[n])
