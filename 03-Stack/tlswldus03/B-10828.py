import sys
input = sys.stdin.readline

n = int(input())
stack = list()

for _ in range(n):
  commandLine = input().split()
  command = commandLine[0]
  if(command == "push"):
    stack.append(int(commandLine[1]))
  elif(command == "pop"):
    if(stack):
      print(stack.pop())
    else:
      print(-1)
  elif(command == "size"):
    print(len(stack))
  elif(command == "empty"):
    if(stack):
      print(0)
    else:
      print(1)
  elif(command == "top"):
    if(stack):
      print(stack[-1])
    else:
      print(-1)
      

