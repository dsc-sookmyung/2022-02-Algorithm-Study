import sys
input = sys.stdin.readline
from collections import deque

def getArr(arrSize, arrCase):
  arr = []
  if(arrSize > 0):
    arr = arrCase[1:-1].split(",")
  return arr

def doFucns(fucns, arr):
  reverseFlag = 1
  dq = deque(arr)
  for fucn in fucns:
    if(fucn == "R"):
      reverseFlag *= (-1)
    elif(fucn == "D"):
      if(dq):
        if(reverseFlag == 1):
          dq.popleft()
        else:
          dq.pop()
      else:
        return "error"
  if(reverseFlag == -1):
    dq.reverse()
  return "[" + ",".join(dq) + "]"

numOfTest = int(input())
for _ in range(numOfTest):
  fucns = list(input().rstrip())
  arr = getArr(int(input()), input().rstrip())
  print(doFucns(fucns, arr))
  




  
    