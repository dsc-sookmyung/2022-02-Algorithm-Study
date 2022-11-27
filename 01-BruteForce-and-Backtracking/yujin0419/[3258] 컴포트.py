import sys

N, Z, M = map(int, input().split())
obstacle = set(map(int, input().split()))

if Z == N:
    Z = 0

for K in range(1, N):
    arr = [(1 + K * x) % N for x in range(N)]

    for target in arr:
        if target in obstacle:
            break
        if target == Z:
            print(K)
            sys.exit()