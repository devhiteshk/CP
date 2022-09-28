import math
from fractions import Fraction
  

t = int(input())

while(t):

    A,B = map(int, input().split())

    X = math.log(B,10)
    Y = math.log(A,10)

    print(X/Y)

    S = str((X/Y).as_integer_ratio())
    print(S)

    i = 0
    a = ""
    b = ""

    while i<len(S):
        if S[i] in "(":
            continue
        elif S[i] == ",":
            break
        else:
            a += S[i]
        i += 1
    print(a)
    while i<len(S):
        if S[i] in ",":
            continue
        elif S[i] == ")":
            break
        else: 
            b += S[i]
        i += 1

    if A**(int(a)) == B**(int(b)):
        print("YES")

    else:
        print("NO")

    t -= 1