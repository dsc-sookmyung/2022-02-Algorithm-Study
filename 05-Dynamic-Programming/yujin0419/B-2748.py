M = 1000000
P = 1500000

fibonacciNumber = int(input())


def fibonacci3(fibonacciNumber):
    a, b = 0, 1

    for _ in range(fibonacciNumber):
        a, b = b % M, (a+b) % M
    return a


print(fibonacci3(fibonacciNumber % P))
