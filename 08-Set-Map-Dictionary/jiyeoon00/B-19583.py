import sys
input = sys.stdin.readline
attendancedic = dict()

s, e, q = input().split()

while(True):
  readline = input().split()
  if(not readline):
    break
  time, name = readline[0], readline[1]
  if(time <= s):
    attendancedic[name] = 1
  elif(e <= time <= q):
    if(name in attendancedic):
      attendancedic[name] += 1

attendee = 0
for name in attendancedic:
  if(attendancedic[name] >= 2):
    attendee += 1

print(attendee)
