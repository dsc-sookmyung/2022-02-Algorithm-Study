import sys
input = sys.stdin.readline

n, m = map(int, input().split())

pokemondic_int = {}
pokemondic_name = {}

for i in range(n):
  name = input().rstrip()
  pokemondic_name[name] = i+1
  pokemondic_int[i+1] = name

for _ in range(m):
  problem = input().rstrip()
  if(problem.isdigit()):
    print(pokemondic_int[int(problem)])
  else:
    print(pokemondic_name[problem])