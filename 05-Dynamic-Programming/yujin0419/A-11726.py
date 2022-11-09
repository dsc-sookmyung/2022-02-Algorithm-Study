width = int(input())

method = [0] * 1001

method[1] = 1
method[2] = 2

for i in range(3, 1001):
    method[i] = method[i - 1] + method[i -2]

print(method[width] % 10007)