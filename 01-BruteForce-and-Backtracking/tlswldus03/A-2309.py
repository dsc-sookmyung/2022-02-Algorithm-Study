import sys
input = sys.stdin.readline

dwarfNum = 9
heights = [int(input()) for _ in range(dwarfNum)]
heights.sort()

start = 0
end = dwarfNum-1

while(start<end):
  dwarfsSum = sum(heights) - (heights[start] + heights[end])
  if(dwarfsSum<100):
    end -= 1
  elif(dwarfsSum>100):
    start += 1
  else:
    for i in range(dwarfNum):
      if(i != start and i != end):
        print(heights[i])
    break



                 