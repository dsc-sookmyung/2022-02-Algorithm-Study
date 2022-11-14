import sys
input = sys.stdin.readline

n = int(input())
matrix = [list(map(int, input().split())) for i in range(n)]
matrixProducts = [[0] * n for i in range(n)]

for i in range(1, n):
    for j in range(n - i):
        x = j + i
        matrixProducts[j][x] = 2 ** 32
        for k in range(j, x):
            matrixProducts[j][x] = min(matrixProducts[j][x], matrixProducts[j][k] + matrixProducts[k + 1][x] + matrix[j][0] * matrix[k][1] * matrix[x][1])
print(matrixProducts[0][n - 1])