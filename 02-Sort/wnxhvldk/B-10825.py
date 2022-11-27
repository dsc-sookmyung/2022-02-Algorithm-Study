n = int(input())
data = [0] * n

for i in range(n):
    name, a, b, c = map(str, input().split())
    data[i] = (name, int(a), int(b), int(c))


data = sorted(data, key=lambda x: (-x[1], x[2], -x[3], x[0]))
for i in range(n):
    print(data[i][0])
