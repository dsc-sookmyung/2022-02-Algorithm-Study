import sys
from collections import defaultdict

input = sys.stdin.readline

n, k = map(int, input().rsplit())
ice = defaultdict(int)
min_l, max_l, answer = sys.maxsize, 0, -1

for _ in range(n):
    g, x = map(int, input().rsplit())
    ice[x] = g
    max_l = max(max_l, x)
    min_l = min(min_l, x)

end, curr = min_l, 0
for start in range(min_l, max_l + 1):
    while end < max_l + 1 and end - start <= k * 2:
        if ice[end] == 0:
            end += 1
            continue
        curr += ice[end]
        end += 1
    answer = max(answer, curr)
    curr -= ice[start]

print(answer)