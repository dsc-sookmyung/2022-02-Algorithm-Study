data = [int(input()) for _ in range(9)]
answer = sum(data)
for i in range(9):
    answer -= data[i]
    for j in range(i + 1, 9):
        answer -= data[j]
        if answer == 100:
            data.remove(data[j])
            data.remove(data[i])
            break
        answer += data[j]
    else:
        answer += data[i]
        continue
    break


print(*sorted(data), sep="\n")
