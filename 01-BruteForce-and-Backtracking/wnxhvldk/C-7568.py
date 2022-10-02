n = int(input())
data = [0 for _ in range(n)]

for i in range(n):
    a, b = map(int, input().split())
    data[i] = [a, b]

answer = [1 for _ in range(n)]
for i in range(n):
    for j in range(n):
        if data[i][0] < data[j][0]:
            if data[i][1] < data[j][1]:
                answer[i] += 1

print(*answer)

