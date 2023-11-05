a = int(input())
b = int(input())
c = int(input())

d = str(a*b*c)

d = list(map(int, d))

for i in range (10):
    print(d.count(i))