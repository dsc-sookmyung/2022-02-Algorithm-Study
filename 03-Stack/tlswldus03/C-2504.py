import sys
input = sys.stdin.readline
from collections import deque


stack = deque()
brackets = list(input().rstrip())
temp = 1
result = 0
before = ""

for bracket in brackets:
  if(bracket == "("):
    temp *= 2
    stack.append("(")
  elif(bracket == "["):
    temp *= 3
    stack.append("[")
  elif(bracket == ")"):
    if(stack and stack[-1] == "("):
      stack.pop()
      if(before == "("):
        result += temp
      temp = temp // 2
    else:
      stack.append(bracket)
  elif(bracket == "]"):
    if(stack and stack[-1] == "["):
      stack.pop()
      if(before == "["):
        result += temp
      temp = temp //3
    else:
      stack.append(bracket)
  before = bracket
      
      
if(stack):
  print("0")
else:
  print(result)
  