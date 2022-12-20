n, m = map(int, input().split())
nlist = set([input() for _ in range(n)])
mlist = set([input() for _ in range(m)])

result = nlist & mlist
result = sorted(result)

print(len(result))
print(*result, sep="\n")