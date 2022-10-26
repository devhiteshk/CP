t = int(input())

while(t):

    n,q = map(int, input().split())

    arr = list(map(int, input().split()))

    S = sum(arr)

    while(q):

        L,R = map(int, input().split())

        # if L-R == 0:
        #     S += 1

        if (R-L+1)%2 != 0:
            S += 1

        q -= 1

    print(S)

    t -= 1