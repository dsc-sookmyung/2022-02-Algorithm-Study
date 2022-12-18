import sys
input = sys.stdin.readline
S, E, Q = input().split()
S = int(S[:2])*100 + int(S[3:])
E = int(E[:2])*100 + int(E[3:])
Q= int(Q[:2])*100 + int(Q[3:])

check = set()
cnt = 0
while True:
    try:
        clock, nickname = input().split()
        my_clock = int(clock[:2])*100+int(clock[3:])

        if my_clock <= S:
            check.add(nickname)

        if E <= my_clock <= Q:
            if nickname in check:
                cnt += 1
                check.remove(nickname)
    except:
        break

print(cnt)
