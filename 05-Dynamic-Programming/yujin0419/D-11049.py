# PyPy3으로 제출
import sys

input = sys.stdin.readline
matrix = int(input())
rowColumn = [list(map(int, input().split())) for i in range(matrix)]
dynamicProgramming = [[0] * matrix for i in range(matrix)]

for i in range(1, matrix):
    for j in range(matrix - i):
        x = j + i
        dynamicProgramming[j][x] = 2 ** 32
        
        for k in range(j, x):
            dynamicProgramming[j][x] = min(dynamicProgramming[j][x], dynamicProgramming[j][k] + dynamicProgramming[k + 1][x] + rowColumn[j][0] * rowColumn[k][1] * rowColumn[x][1])

print(dynamicProgramming[0][matrix - 1])
