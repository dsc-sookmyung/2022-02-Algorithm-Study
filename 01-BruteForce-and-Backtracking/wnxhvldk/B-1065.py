n = int(input())
answer = 0

for i in range(1, n+1):
    if i < 100:
        answer += 1
    elif i < 1000:
        if (i % 10) - (i // 10 % 10) == (i // 10 % 10) - (i // 100):
            answer += 1

print(answer)