import sys
input = sys.stdin.readline

#한자리수 => 무조건 한수
#두자리수 => 무조건 한수
#세자리수 => 따져줘야한다. 세자리수일때 2b = a+c 공식 사용

n = int(input())
hanNum = 0

while(1):
  if(n<100):
    hanNum += n
    break
  else:
    if(2*(n%100//10) == n//100 + n%10):
      hanNum += 1
    n = n-1

print(hanNum)


