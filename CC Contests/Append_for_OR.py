t = int(input())

while t:

    N1, Y1 = map(int, input().split())

    arr = list(map(int, input().split()))

    OR = 0
    for i in arr:
        OR |= i

    if OR == Y1:
        print(0)
    
    else:
        x = Y1 - OR
        if( (x & Y1) == x):
            print(x)
        else:
            print(-1)

    t -= 1