arraySize = int(input())
arrayFactor = list(map(int, input().split()))
dynamicProgram = [0 for i in range(arraySize)]

for i in range(arraySize):
    for j in range(i):
        if arrayFactor[i] > arrayFactor[j] and dynamicProgram[i] < dynamicProgram[j]:
            dynamicProgram[i] = dynamicProgram[j]
    dynamicProgram[i] += 1

print(max(dynamicProgram))
