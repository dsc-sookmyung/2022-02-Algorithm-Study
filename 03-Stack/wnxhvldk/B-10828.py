def push(x):
    stack.append(x)

def pop():
    return stack.pop() if stack else -1

def size():
    return len(stack)

def empty():
    return 0 if stack else 1

def top():
    return stack[-1] if stack else -1
    

import sys
N = int(input())
stack = []

for _ in range(N):
    input_split = sys.stdin.readline().rstrip().split()
    cmd = input_split[0]
    if cmd == "push":
        push(input_split[1])
    elif cmd == "pop":
        print(pop())
    elif cmd == "size":
        print(size())
    elif cmd == "empty":
        print(empty())
    elif cmd == "top":
        print(top())
