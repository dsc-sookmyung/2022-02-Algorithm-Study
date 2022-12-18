import sys

n, m = map(int, input().split())


int_key = {}  
name_key = {}  
for i in range(n):
    name = sys.stdin.readline().strip()
    int_key[i] = name
    name_key[name] = i


for _ in range(m):
    item = sys.stdin.readline().strip()
    if item.isdigit() == True:
        print(int_key[int(item)-1])
    else:
        print(name_key[item]+1)
