N = int(input())
S = []
R = []
for i in range (N):
    S.append(list(map(int,input().split())))

for j in range(N):
    rank = 1
    for k in range(N):
        if j!=k:
            if (S[j][0] <S[k][0]) and (S[j][1] < S[k][1]):
                rank +=1
    R.append(rank)

for i in R:
    print(i,end=' ')
