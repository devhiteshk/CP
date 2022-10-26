from math import sqrt
from re import I


t = int(input())

while t:

    n = int(input())

    x = 0

    while(n%2 == 0):
        x += 1
        n /= 2
    
    if x%2 == 1:
        x -= 1
        n *= 2

    i = 0
    while i*i <= n:

        y = n-i*i
        z = int(sqrt(y))
        if z*z == y:
            print(z<<(x//2),end=" ")
            print(i<<(x//2))
            break

        i += 1
    

    t-=1