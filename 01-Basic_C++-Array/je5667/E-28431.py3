nums = set()
res = 0
for _ in range (5):
    a = int(input())
    if a in nums:
        res -= a
        nums.discard(a)
    else:
        nums.add(a)
        res += a
print(res)