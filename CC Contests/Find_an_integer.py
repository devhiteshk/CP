t = int(input())
import math

def gcd(a,b):
    if b == 0:
        return a
    return gcd(b,a%b)

def lcm(a,b):
    return (a//gcd(a,b))*b

while(t):

    # N+Y%X == 0
    # N+X%Y == 0

    X,Y = map(int, input().split())

    if X == Y:
        print(X)

    else:
        if lcm(X,Y) - (X+Y) >= 0:
            print(lcm(X,Y)-(X+Y))
        else:
            print(lcm(X,Y) - (X+Y) + max(X,Y))





    t -= 1